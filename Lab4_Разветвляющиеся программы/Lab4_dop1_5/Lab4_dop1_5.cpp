//Может ли шар радиуса r пройти через ромбообразное отверстие с диагоналями p и q?

#include <iostream>
#include <math.h>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double r, p, q;
	double x;
	cout << "Введите радиус шара:"; cin >> r;
	cout << "Введите первую диагональ ромба: "; cin >> p;
	cout << "Введите вторую диагональ ромба: "; cin >> q;
	x = (p * q) / (2 * sqrt(pow(p, 2) + pow(q, 2)));
	if (r < x)
	{
		cout << "Пройдёт";
	}
	else
	{
		cout << "Не пройдёт";
	}
	return(0);
}