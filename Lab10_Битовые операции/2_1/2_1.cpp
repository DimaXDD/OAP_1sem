//1.	Извлечь 5 битов числа A, начиная со второго и вставить их в число B, начиная с третьего бита.

#include <iostream> // 652 и 32
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int A;
	int A_mask = 07; // = 111b
	int B;
	char tmp[33];
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	cout << " " << endl;
	cout << "Число A: " << A << endl;
	_itoa_s(A, tmp, 2);
	cout << "Представление числа в двоичном коде: " << tmp << endl;
	cout << " " << endl;
	cout << "Число B: " << B << endl;
	_itoa_s(B, tmp, 2);
	cout << "Представление числа в двоичном коде: " << tmp << endl;
	A >>= 2;
	A &= A_mask;
	B <<= 5;
	B |= A;
	B <<= 2;
	cout << " " << endl;
	cout << "Число B = " << B << endl;
	_itoa_s(B, tmp, 2);
	cout << "Представление числа в двоичном коде: " << tmp << endl;
	return 0;
}