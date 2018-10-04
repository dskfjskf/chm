#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <algorithm>


ref class metod
{
	int n, c1, c2,c2next, num;
	double x, v, v2, s, eps, e, u, h, ge, nexth;
	double maxh, minh, xmaxh, xminh, maxe, maxge, maxxge;

	double f(double ix, double iu);
	double fu(double ix);

	double RK(double xn, double Vn, double hn);
	void curh();

public:
	metod(double x0, double u0, double ih, double ieps, int inum);
	void calc();

	int getn() { return n; }
	int getc1() { return c1; }
	int getc2() { return c2; }
	double getx() { return x; }
	double getv() { return v; }
	double getv2() { return v2; }
	double gete() { return e; }
	double getu() { return u; }
	double geth() { return h; }
	double getge() { return ge; }
	double getmaxh() { return maxh; }
	double getminh() { return minh; }
	double getxmaxh() { return xmaxh; }
	double getxminh() { return xminh; }
	double getmaxe() { return maxe; }
	double getmaxge() { return maxge; }
	double getmaxxge() { return maxxge; }
};