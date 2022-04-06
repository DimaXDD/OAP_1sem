#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n, x, summa = 0, proizv = 1;
	cout << "Из скольки элементов дана последовательность? ";
	cin >> n;
	if (n > 0)
	{
		for (int a = 1; a <= n; a++)
		{
			cout << "Введите x = ";
			cin >> x;
			if (x >= 0)
			{
				summa += x;
			}
			else
			{
				proizv *= x;
			}
		}
	}
	else
	{
		cout << "Неккоректные данные" << endl;
	}
	cout << "Сумма положительных элементов = " << summa << endl;
	cout << "Произведение отрицательных элементов = " << proizv;
	return (0);
}