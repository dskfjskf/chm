#include "metod.h"

metod::metod(double x0, double u0, double ih, double ieps, int inum)
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
}

double metod::f(double ix, double iu)
{
	if (num == 0)
		return 3 * iu;
	else if (num == 1)
		return 1 / (2 * ix + ix*ix)*iu*iu + iu - iu*iu*iu*sin(10 * ix);
	else if (num == 2)
		2;
}

double metod::fu(double ix)
{
	return pow(M_E, 3 * ix);
}

double metod::RK(double xn, double Vn, double hn)
{
	double	k1 = f(xn, Vn);
	double	k2 = f(xn + hn / 2, Vn + hn / 2 * k1);
	double	k3 = f(xn + hn / 2, Vn + hn / 2 * k2);
	double	k4 = f(xn + hn, Vn + hn*k3);

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
	x += h;
	v2 = RK(x + h / 2, RK(x, v, h / 2), h / 2);
	v = RK(x, v, h);

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

	s = abs(RK(x, v, h) - RK(x + h / 2, RK(x, v, h / 2), h / 2)) / 15.0;
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
