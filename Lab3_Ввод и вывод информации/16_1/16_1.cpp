//Нарисовать грибок, закрашенный введенным символом.

#include <iostream>
#include <iomanip>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char a, space; space = ' ';
	cout << "Введите символ ";
	cin >> a;
	cout << setw(40) << setfill(space) << space;
	cout << setw(9) << setfill(a) << a << endl;
	cout << setw(39) << setfill(space) << space;
	cout << setw(11) << setfill(a) << a << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(13) << setfill(a) << a << endl;
	cout << setw(37) << setfill(space) << space;
	cout << setw(15) << setfill(a) << a << endl;
	cout << setw(43) << setfill(space) << space;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(43) << setfill(space) << space;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(43) << setfill(space) << space;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(43) << setfill(space) << space;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(43) << setfill(space) << space;
	cout << setw(3) << setfill(a) << a << endl;
}