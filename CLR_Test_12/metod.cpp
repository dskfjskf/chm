#include "metod.h"

metod::metod(double x0, double u0, double ih, double ieps, int inum, double z0, double icoeff)
{
	x = x0;
	v = v2 = u0;
	h = nexth = ih;		
	eps = ieps;
	e = 0;
	c1 = c2 = c2next = 0;
	maxh = xmaxh = maxe = maxxge = 0;
	minh = h;
	xminh = x;
	num = inum;
	ge = 0; 
	u = u0; 
	
	z = z0;			
	coeff = icoeff;
	k = 0;
	z12 = v12 = 0; 

	
	if (num != 2)
	{
		s = abs(RK(x, v, h) - RK(x + h / 2, RK(x, v, h / 2), h / 2)) / 15.0;
		curh();			//корриктеровка первого шага тестовой и 1 осн
	}
	else 
	{
		k = 1;
		double s2 = (RK(x, v, h, z) - RK(x + h / 2, v12, h / 2, RK(x, v, h / 2, z))) / 15.0;
		k = 0;
		double nextz12 = RK(x, v, h / 2, z);
		double s1 = (RK(x, v, h, z) - RK(x + h / 2, RK(x, v, h / 2, z), h / 2, nextz12)) / 15.0;
		s = std::max(s1, s2);
		curh3();		//корриктеровка первого шага 2 осн	
	}	
}

double metod::f(double ix, double iu)
{
	if (num == 0)
		return 3 * iu;
	else if (num == 1)
		return 1 / (2 * ix + ix*ix)*iu*iu + iu - iu*iu*iu*sin(10 * ix);
	else if (num == 2)
	{
		if (k == 0) return iu;
		else if (k == 1) return -coeff*sqrt(iu*iu + 1);
	}
	else return 0;

}

double metod::fu(double ix)
{
	return pow(M_E, 3 * ix);
}

double metod::RK(double xn, double Vn, double hn, double zn)
{	
	if (num == 2)
		std::swap(Vn, zn);

	double	k1 = f(xn, Vn);
	double	k2 = f(xn + hn / 2, Vn + hn / 2 * k1);
	double	k3 = f(xn + hn / 2, Vn + hn / 2 * k2);
	double	k4 = f(xn + hn, Vn + hn*k3);

	if (num == 2 && k == 0)
		std::swap(Vn, zn);

	return Vn + hn / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
	
}

void metod::curh()
{
	h = nexth;
	if (eps > 0)
	{
		while (s > eps)
		{
			h /= 2;
			s = abs(RK(x, v, h) - RK(x + h / 2, RK(x, v, h / 2), h / 2)) / 15.0;
			c1++;
		}
		if (eps / 32.0 > s)
		{
			nexth = h * 2;
			c2next++;
		}
		if (s >= eps / 32.0 && s <= eps)
			nexth = h;
	}
}

void metod::calc()
{
	n++;
	
	v2 = RK(x + h / 2, RK(x, v, h / 2), h / 2);	
	v = RK(x, v, h);
	x += h;		// 1 осн					

	if (num == 0)
	{
		u = fu(x);
		ge = abs(v - u);
		if (ge > maxge)
		{
			maxge = ge;
			maxxge = x;
		}
	}

	s = abs(RK(x, v, nexth) - RK(x + nexth / 2, RK(x, v, nexth / 2), nexth / 2)) / 15.0;
	c2 = c2next;
	curh();

	s = abs(v - v2) / 15.0;
	e = s * 16;

	if (e > maxe)
		maxe = e;
	if (h > maxh)
	{
		maxh = h;
		xmaxh = x;
	}
	else if (h < minh)
	{
		minh = h;
		xminh = x;
	}
}

void metod::curh3()
{
	h = nexth;
	if (eps > 0)
	{
		while (s > eps)
		{
			h /= 2;

			k = 1;
			double s2 = (RK(x, v, h, z) - RK(x + h / 2, v12, h / 2, RK(x, v, h / 2, z))) / 15.0;
			k = 0;
			double nextz12 = RK(x, v, h / 2, z);
			double s1 = (RK(x, v, h, z) - RK(x + h / 2, RK(x, v, h / 2, z), h / 2, nextz12)) / 15.0;
			s = std::max(s1, s2);

			c1++;
		}
		if (eps / 32.0 > s)
		{
			nexth = h * 2;
			c2next++;
		}
		if (s >= eps / 32.0 && s <= eps)
			nexth = h;
	}
}

void metod::calc3()
{
	n++;
	
	k = 1;
	z12 = RK(x, v, h / 2, z);
	z2 = RK(x + h / 2, v12, h / 2, z12);
	k = 0;
	v12 = RK(x, v, h / 2, z);	
	v2 = RK(x + h / 2,v12, h / 2, z12);	
	v = RK(x, v, h, z);	
	k = 1;
	z = RK(x, v, h, z);	
	x += h;

	double s2 = (RK(x, v, nexth, z)- RK(x + nexth / 2, v12, nexth / 2, RK(x, v, nexth / 2, z)))/15.0;

	k = 0;
	double nextz12= RK(x, v, nexth / 2, z);
	double s1 = (RK(x, v, nexth, z) - RK(x + nexth / 2, RK(x, v, nexth / 2, z), nexth / 2, nextz12)) / 15.0;

	s = std::max(s1, s2);
	c2 = c2next;	

	curh3();	

	s1 = abs(v - v2) / 15.0;
	s2 = abs(z - z2) / 15.0;
	s = std::max(s1,s2);
	e = s * 16;

	if (e > maxe)
		maxe = e;
	if (h > maxh)
	{
		maxh = h;
		xmaxh = x;
	}
	else if (h < minh)
	{
		minh = h;
		xminh = x;
	}
}