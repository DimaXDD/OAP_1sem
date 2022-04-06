#include<iostream>
using namespace std;
void delX(char* str, char symb) {
	for (int i = 0; str[i] != '\0'; ++i)
		if (str[i] == '*')
		{
			for (++i; str[i] != '*'; ++i) cout << str[i];
			break;
		}
}
int main()
{
	setlocale(LC_CTYPE, "Rus");
	char* s = new char[100];
	int i = 0, c = 0;
	cout << "Строка" << endl;
	cin >> s;
	char symb = '*';
	delX(s, symb);
	cout << endl;
	delete[] s;
	return 0;
}