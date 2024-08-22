#include "Level1.h"

array<PointF>^ pFunc(double a, double b, list<Lexem>& l, double W, double H)
{
	double Ymin = minF(a, b, l) - 0.05;
	double Ymax = maxF(a, b, l);
	double Mx = W / (b - a);
	double My = H / (Ymax - Ymin);
	double h = 1 / Mx;
	array<PointF>^ arr = gcnew array<PointF>(W + 1);
	int i = 0;
	for (double x = a; x < (b + h / 2); x += h, i++)
	{
		arr[i].X = Mx * (x - a);
		arr[i].Y = H - My * (calc(x, l) - Ymin);
	}
	return arr;
}