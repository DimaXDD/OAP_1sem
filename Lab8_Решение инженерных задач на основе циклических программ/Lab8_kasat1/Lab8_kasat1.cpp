// Вариант 4
#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int a = 2, b = 3;
	double e = 0.0001, x1, x = 0;
	if ((sin(a) + 2 + a) * (-cos(a)) > 0) x1 = a;
	else x1 = b;
	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = x - (exp(x) - 3 - 1.00 / x) / (exp(x) - 1 / pow(x, 2));
	}
	cout << x1 << endl;
}