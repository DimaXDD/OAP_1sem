//Получить целочисленную квадратную матрицу порядка n, элементами которой являются числа 1,2,...,n2 ,  расположенные по спирали.     
#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUS");
	int n, c = 0, i, j, ** a;
	cout << "Число n: "; 
	cin >> n;
	a = new int* [n];
	for (i = 0; i < n; ++i)
	{
		a[i] = new int[n];
	}
	for (i = 0; i < n / 2; ++i) 
	{
		for (j = i; j < n - i - 1; ++j) a[i][j] = ++c;
		for (j = i; j < n - i - 1; ++j) a[j][n - i - 1] = ++c;
		for (j = i; j < n - i - 1; ++j) a[n - i - 1][n - j - 1] = ++c;
		for (j = i; j < n - i - 1; ++j) a[n - j - 1][i] = ++c;
	}
	if (n % 2)
	{
		a[n / 2][n / 2] = ++c;
	}
	for (i = 0; i < n; ++i) 
	{
		for (j = 0; j < n; ++j) cout << setw(3) << a[i][j] << ' ';
		cout << endl;
	}
}