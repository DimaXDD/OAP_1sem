// Вариант 14 Касательная
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int a = 1, b = 1.5;
	double e = 0.0001, x1, x = 0;
	if (((pow(a, 3) + 2 * a - 4) / (3 * pow(a, 2) + 2)) > 0) x1 = a;
	else x1 = b;
	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = x - (pow(x, 3) + 2 * x - 4) / (3 * pow(x, 2) + 2);
	}
	cout << x1 << endl;
}