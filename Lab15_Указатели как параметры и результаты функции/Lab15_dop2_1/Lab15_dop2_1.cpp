// cos(x) + x - 7  5/6
#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
	return cos(x) + x - 7;
}
double fs(double x)
{
	return -sin(x) + 1;
}
double fs2(double x)
{
	return -cos(x);
}
double dichotomyMethod(double(*f) (double), double a, double b, double e)

{
	while (fabs(a - b) > 2.0 * e)
	{
		double x = (a + b) / 2.0;
		if (f(x) * f(a) <= 0)
			b = x;
		else
			a = x;
	}
	return (a + b) / 2.0;
}

double tangentMethod(double(*f) (double), double(*fs) (double), double(*fs2) (double), double a, double b, double e)
{
	double x, x1;
	if (f(a) * fs2(a) > 0)
		x1 = a;
	else
		x1 = b;
	x = x1;
	do
	{
		x = x1;
		x1 = x - (f(x) / fs(x));
	} while (fabs(x1 - x) > e);
	return x1;
}
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, e;
	cout << "Введите левую границу интервала (a) "; cin >> a;
	cout << "Введите правую границу интервала (b) "; cin >> b;
	cout << "Введите точность решения (e) "; cin >> e;
	cout << "Корень решения методом дихотомии:" << dichotomyMethod(&f, a, b, e) << endl;
	cout << "Корень решения методом касательных:" << tangentMethod(&f, &fs, &fs2, a, b, e) << endl;
}