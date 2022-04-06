#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n, x, summa = 0, sred, chetchik = 0;
	cout << "Из скольки элементов дана последовательность? ";
	cin >> n;
	if (n > 0)
	{
		for (int a = 1; a <= n; a++)
		{
			cout << "Введите x = ";
			cin >> x;
			if (a % 2 == 1)
			{
				summa += x;
				chetchik++;
			}
		}
	}
	else
	{
		cout << "Неккоректные данные" << endl;
	}
	sred = summa / chetchik;
	cout << "Количество нечётных элементов = " << chetchik << endl;
	cout << "Их среднее арифметическое = " << sred;
	return (0);
}