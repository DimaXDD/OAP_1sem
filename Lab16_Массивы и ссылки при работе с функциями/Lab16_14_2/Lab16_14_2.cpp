//Написать и протестировать функцию compr, которая «сжимает» строку, удаляя из нее все пробелы. С ее помощью сжать различные строки

#include <iostream>
#include <stdio.h>
using namespace std;

int zip(char* s, int i)
{
	return *(s + i);
}
void main()
{
	setlocale(LC_ALL, "RUS");
	int i, j = 0;
	char s[100], s1[100];
	cout << "Введите строку: " << endl;
	gets_s(s);
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != ' ')
		{
			*(s + j) = zip(s, i);
			j++;
		}
	}
	cout << s << endl;
}

