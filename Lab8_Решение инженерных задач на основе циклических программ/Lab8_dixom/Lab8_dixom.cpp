// Вариант 15 Дихотомия
#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double a = -2, b = -1, e = 0.0001, x;
	while (abs(a - b) > (2 * e)) 
	{
		x = (a + b) / 2;
		if ((sin(a) + 2 + a) * (sin(x) + 2 + x) <= 0) b = x;
		else a = x;
	}
	cout << "x = " << x << endl;
}
