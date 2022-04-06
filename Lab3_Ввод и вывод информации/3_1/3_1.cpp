//Нарисовать елочку, закрашенную введенным символом.

#include <iostream>
#include <iomanip> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, space; space = ' ';
	cout << "Введите символ ";
	cin >> c;
	cout << setw(40) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(38) << setfill(space) << space;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(36) << setfill(space) << space;
	cout << setw(9) << setfill(c) << c << endl;

	cout << setw(40) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(34) << setfill(space) << space;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(32) << setfill(space) << space;
	cout << setw(17) << setfill(c) << c << endl;

	cout << setw(40) << setfill(space) << space;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(30) << setfill(space) << space;
	cout << setw(21) << setfill(c) << c << endl;
	cout << setw(28) << setfill(space) << space;
	cout << setw(25) << setfill(c) << c << endl;

	cout << setw(39) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(39) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(39) << setfill(space) << space;
	cout << setw(3) << setfill(c) << c << endl;
	

}