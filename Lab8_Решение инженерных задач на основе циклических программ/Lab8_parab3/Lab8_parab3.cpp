//Вариант 1 Парабола
#include <iostream>
int main() 
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n = 200;
	double x, h, S, s1 = 0, s2 = 0, a = 1, b = 6, i = 1;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	do {
		s2 = s2 + (1 + pow(x, 3));
		x += h;
		s1 = s1 + (1 + pow(x, 3));
		x += h;
		i += 1;
	} while (i < n);
	S = h / 3 * ((1 + pow(x, 3)) + 4 * (1 + pow(x + h, 3)) + 4 * s1 + 2 * s2 + (1 + pow(b, 3)));
	cout << "S = " << S << endl;
}