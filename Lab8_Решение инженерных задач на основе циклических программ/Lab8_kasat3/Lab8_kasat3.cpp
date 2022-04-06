//Вариант 1 Касательная
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int a = 1, b = 2;
	double e = 0.0001, x1, x = 0;
	if (((pow(x,3)+ x - 3) * 6 * x) > 0) x1 = a;
	else x1 = b;
	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = x - ((pow(x, 3) + x - 3) / (3 * pow(x, 2) + 1));
	}
	cout << x1 << endl;
}