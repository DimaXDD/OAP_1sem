#include <iostream>
#include <ctime>
void main() 
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	srand(time(NULL));
	int k, n, q;
	int rmn1 = -100, rmn2 = -100, rmx1 = 100, rmx2 = 100;
	int count = 0;
	const int SIZE1 = 1000;
	const int SIZE2 = 1000;
	int x[SIZE1] = {};
	int y[SIZE2] = {};
	cout << "Размер первого массива: ";
	cin >> k;
	cout << "Размер второго массива: ";
	cin >> n;
	for (int i = 0; i < k; i++)
	{
		*(x + (i)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx1 - rmn1) + rmn1);
		cout << "x[" << i << "]" << "\t" << x[i] << endl;
	}
	cout << " " << endl;
	for (int j = 0; j < n; j++)
	{
		*(y + (j)) = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx2 - rmn2) + rmn2);
		cout << "y[" << j << "]" << "\t" << y[j] << endl;
	}
	cout << "Введите число q: ";
	cin >> q;
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < n; ++j)
		{ 
		if (x[i] + y[j] >= q - 1 && x[i] + y[j] <= q || x[i] + y[j] >= q && x[i] + y[j] <= q + 1) 
		{
			cout << "x[" << i << "]" << " + " << "y[" << j << "]" << " = " << q << endl;
			count++;
		}
		}
	}
	if (count == 0)
	{
		cout << "В пределах q = (" << q - 1 << "," << q + 1 << ") результатов нет";
	}
}