#include <iostream>
#include <ctime>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	const int N = 10;
	int i, sz, A[N], el;
	int mn = 0;
	int rmn = 0, rmx = 99;
	int counter = 0;
	int k = 3;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand(time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		
	}
	for (int counter = 0; counter < sz; counter++)
	{
		cout << "A[" << counter+1 << "]" << "\t" << A[counter] << endl;
	}
	cout << " " << endl;
	cout << "Какой элемент массива вы хотите удалить ? "; cin >> el;
	for (i = el-1; i < sz; i++)
	{
		A[i] = A[i + 1];
	}
	for(int i = 0; i < sz - 1; i++)
		if (A[i] % 2 == 0 && A[i] != 0) // Add ziro
			A[i - 1] = 0;
	for (int counter = 0; counter < sz-1; counter++)
	{
		
		cout << "A[" << counter+1 << "]" << "\t" << A[counter] << endl;
	}
	cout << " " << endl;
	
}