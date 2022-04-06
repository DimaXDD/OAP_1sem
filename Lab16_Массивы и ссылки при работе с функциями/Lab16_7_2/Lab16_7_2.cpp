//Написать функцию mn с переменным числом параметров, которая находит минимальное из чисел типа int или из чисел типа double, тип параметров определяется с помощью первого параметра функции. 

#include <iostream>
using namespace std;
double mn(bool isInt, int n, ...)
{
	if (isInt == true)
	{
		int* p = &n;
		int min = 10000;
		for (int i = 1; i < n; i++)
		{
			if (*(++p) < min)
				min = *(++p);
		}
		return min;
	}
	else return 0;
}
void main()
{
	cout << mn(true, 8, 5, 8, 3, 12, 1, -1, 3, 5) << endl;
	cout << mn(true, 2, 8, 3) << endl;
	cout << mn(false, 5, 1.1, 2.6, 4, -3, 5) << endl;
}