//Определить есть ли среди заданных целых чисел A, B, C, D хотя бы одно чётное.

#include <iostream>
#include <math.h>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a, b, c, d, i = 0;

	cout << "Введите a = "; cin >> a;
	cout << "Введите b = "; cin >> b;
	cout << "Введите c = "; cin >> c;
	cout << "Введите d = "; cin >> d;
	if (a % 2 == 0)
	{
		i = i + 1;

	if (b % 2 == 0)
	{
		i = i + 1;
	}
	if (c % 2 == 0)
	{
		i = i + 1;
	}
	if (d % 2 == 0)
	{
		i = i + 1;
	}
	}
	if (i >= 1)
	{
		cout << "Есть, кол-во -  " << i << endl;
	}
	else
	{
		cout << "Нет";
	}
	return(0);
 }