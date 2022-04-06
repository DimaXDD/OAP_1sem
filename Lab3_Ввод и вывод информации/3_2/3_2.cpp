//Найти площадь прямоугольника, основание которого в n раз больше высоты, а площадь равна периметру.

#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int o, h, p, n;
	cout << "Длина основания прямоугольника: ";
	cin >> o;
	cout << "Во сколько раз длина основания больше высоты? ";
	cin >> n;
	h = o / n;
	p = 2 * (h + o);
	cout << "Площадь = " << p << endl;
	return(0);
}
