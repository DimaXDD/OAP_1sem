//Разработать консольную программу-калькулятор для целых числе с операциями %, /, +, -, *.

#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a, b;
	int k;
	cout << "Введите число a: "; cin >> a;
	cout << "Введите число b: "; cin >> b;
	cout << "Выберите операцию : " << endl << "1) %" << endl << "2) /" << endl << "3) +" << endl << "4) -" << endl << "5) *" << endl;
	cin >> k;
	switch (k)
	{
	case 1: {a = a % b; break; }
	case 2: {a = a / b; break; }
	case 3: {a = a + b; break; }
	case 4: {a = a - b; break; }
	case 5: {a = a * b; break; }
	}
	cout << "Ответ = " << a;
	return (0);
}