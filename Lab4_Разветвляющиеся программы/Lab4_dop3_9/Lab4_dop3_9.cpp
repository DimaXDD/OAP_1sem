//На шахматной доске стоят черный король и белые ладья и слон.Проверить, есть ли угроза королю и если есть, то от кого именно.

#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_CTYPE, "Russian");
	char x1;
	int y1;
	char x2;
	int y2;
	char x3;
	int y3;
	cout << "Введите координаты короля " << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты ладьи " << endl;
	cin >> x2 >> y2;
	cout << "Введите координаты слона" << endl;
	cin >> x3 >> y3;
	if (x1 == x2 || y1 == y2)
	{
		cout << "Угроза от ладьи есть!" << endl;
	}

	else if (x1 != x2 || y1 != y2)
	{
		cout << "Угрозы от ладьи нет!" << endl;
	}
	if (abs(y3 - y1) == abs(x3 - x1))
	{
		cout << "Угроза от слона есть!" << endl;
	}
	else if (abs(y3 - y1) != abs(x3 - x1))
	{
		cout << "Угрозы от слона нет!" << endl;
	}
	return 0;
}