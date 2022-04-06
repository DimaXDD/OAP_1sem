//Проверить, все ли столбцы матрицы содержат хотя бы один положительный элемент. Если нет, то в первом столбце, не удовлетворяющем условию, заменить отрицательные элементы их модулями

#include <iostream>
#include <ctime>
using namespace std;

int findAllMinus(int** A, int row, int col)
{
	for (int j = 0; j < col; j++)
	{
		int negativeNum = 0;
		for (int i = 0; i < row; i++)
		{
			if (*(*(A + i) + j) < 0)
				negativeNum = negativeNum + 1;
		}
		if (negativeNum == row)
			return j;
	}
	return -1;
}


void main()
{
	setlocale(LC_ALL, "RUS");
	int** A, row, col, i, j; 
	cout << "Введите число строк матрицы "; cin >> row;
	cout << "Введите чиcло столбцов "; cin >> col;
	A = new int* [row];
	for (int i = 0; i < row; i++)
	{
		A[i] = new int[col];
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> *(*(A + i) + j);
		}
	}
	int negCol = findAllMinus(A, row, col);
	if (negCol >= 0)
	{
		cout << "Индекс отрицательного столбца: " << negCol << endl;


	}
	cout << "Результирующая матрица:" << endl;

	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++) 
		{
			if (j == negCol)
			{
				*(*(A + i) + j) = abs(*(*(A + i) + j));
			}
			cout << "A[" << i << "," << j << "] =" << *(*(A + i) + j) << "\t";
		}
			
	}
}
