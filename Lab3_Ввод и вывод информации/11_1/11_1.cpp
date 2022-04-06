#include <iostream>
#include <iomanip>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, space; space = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(10) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(9) << setfill(space) << space;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(10) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(11) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(7) << setfill(space) << space;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(11) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(11) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(11) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(10) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c;
	cout << setw(1) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(9) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c;
	cout << setw(3) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
}