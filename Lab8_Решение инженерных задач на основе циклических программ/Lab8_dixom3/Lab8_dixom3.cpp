//Вариант 1 Дихотомия
#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double a = 1, b = 2, e = 0.0001, x;
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		if ((pow(x,3) + x - 3) * (pow(a,3) + a - 3) <= 0) b = x;
		else a = x;
	}
	cout << "x = " << x << endl;
}