//Написать программу, реализующую выделение подстроки S1 длиной k с позиции номер n из строки. 

#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	string s;
	string s1;
	int n, k;
	cout << "Введите заданное предложение: ";
	cin >> s;
	cout << "Введите кол-во символов в подстроке s1: ";
	cin >> k;
	cout << "Введите, с которого символа нужно вырезать подстроку: ";
	cin >> n;
	for (int i = 0; i < s.length(); i++)
	{
		for (int i1 = 0; i1 < k; i1++)
		{
			s.substr(0, k);
		}
		s.erase(n-1, k); i -= k;
	}
	cout << "Подстрока: " << s1 << endl;
	cout << "Что осталось: " << s << endl;
}