// Вариант 15 Касательная
#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int a = -2, b = -1;
	double e = 0.0001, x1, x = 0;
	if ((sin(a) + 2 + a) * (-cos(a)) > 0) x1 = a;
	else x1 = b;
	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = x - (sin(x) + 2 + x) / (cos(x) + 1);
	}
	cout << x1 << endl;
}
