#include <iostream>
using namespace std;
double MinimumOfTheRow(double N, double First, ...);
int MinimumOfTheRow(int N, int First, ...);
void matrix();
int main()
{

	setlocale(LC_CTYPE, "Russian");
	short Voice = 0;
	do {
		cout << "Выберите номер задания: " << endl;
		cout << "1 - Найти строку с положительными элементами" << endl;
		cout << "2 - Нахождение минимального из чисел" << endl;
		cin >> Voice;
		switch (Voice)
		{
		case 1: matrix(); break;
		case 2: cout <<"Минимальное из чисел: " << MinimumOfTheRow(5, 14, 1, 4, 2, 0) << endl; break;
		case 3: break;
		}
	} while (Voice != 3);
	return 0;
}
void matrix()
{
	//Найти в матрице первую строку, все элементы которой положительны, и сумму этих элементов. Уменьшить все элементы матрицы на эту сумму.
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int i = 0, j = 0, ** A, sz = 4, count = 0, stroka = 0, sum = 0;
	A = new int* [sz];
	for (i = 0; i < 4; i++)
	{
		A[i] = new int[sz];
		for (j = 0; j < 4; j++)
		{
			A[i][j] = rand() % 99 - 25;
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (A[i][j] > 0)
			{
				count++;
				sum += A[i][j];
			}
		}
		if (count == 4)
		{
			stroka = ++i;
			break;
		}
		else
		{
			count = 0;
			sum = 0;
		}
	}
	cout << "Первая положительная строка: " << stroka << endl;
	cout << "Сумма элементов этой строки: " << sum << endl;
	cout << "Новая матрица, уменьшенная на эту сумму:\n";
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << A[i][j] - sum << "\t";
		}
		cout << "\n";
	}
}
double MinimumOfTheRow(double N, double First, ...)
{
	double* D = &First;
	double* Min = &First;
	while (N--)
	{
		if (*(++D) < *Min)
			*Min = *D;
	}
	return *Min;
}
int MinimumOfTheRow(int N, int First, ...)
{
	int* U = &First;
	int* Min = &First;
	while (N--)
	{
		if (*Min > *(++U))
			*Min = *U;
	}
	return *Min;
}