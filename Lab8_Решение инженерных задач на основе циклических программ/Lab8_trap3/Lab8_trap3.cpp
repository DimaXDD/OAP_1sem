//Вариант 1 Трапеция
#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double h, x, s = 0, a = 1, b = 6, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s = s + h * (1 + pow(x, 3) + 1 + pow(x + h, 3));
		x = x + h;
	}
	cout << "s = " << s << endl;
}