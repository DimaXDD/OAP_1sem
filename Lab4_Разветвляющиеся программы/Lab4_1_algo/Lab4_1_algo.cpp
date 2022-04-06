#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x, y, z, a, b, minone, mintwo, d;
	cout << "Введите x = "; cin >> x;
	cout << "Введите y = "; cin >> y;
	cout << "Введите z = "; cin >> z;
	a = (x + y + z);
	b = x * y * z;
	if (a > b) {
		minone = b;
	}
	else {
		minone = a;
	}

	if (x < y || x < z) {
		mintwo = x;
	}
	else if (y < x || y < z) {
		mintwo = y;
	}
	else if (z < x || y < z) {
		mintwo = z;
	}
	else {
		cout << "Ошибка";
	}
	d = minone * mintwo;
	cout << "Ответ: " << d;
	return 0;
}