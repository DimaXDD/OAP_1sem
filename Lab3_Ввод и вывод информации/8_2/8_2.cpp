﻿//Вычислить площадь треугольника по формуле Герона, если заданы его стороны. 

#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double a, b, c, p, s;
	cout << "Введите стороны треугольника:  a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	if (a < b + c || b < a + c || c < a + b)
	{
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Площадь треугольника = " << s << endl;
		return (0);
	}
	else
	{
		cout << "Ошибка ";
	}
}