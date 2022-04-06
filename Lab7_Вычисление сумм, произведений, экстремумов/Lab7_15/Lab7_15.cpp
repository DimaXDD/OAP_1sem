#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double x, q, sum = 0, X, t = 0.45;
	for (int n = 1; n <= 6; n++)
	{
		cout << "Введите x = ";
		cin >> x;
		X = (x + 1) / x;
		sum += X;
	}
	q = sum + t;
	cout << "q = " << q;
	return (0);
}