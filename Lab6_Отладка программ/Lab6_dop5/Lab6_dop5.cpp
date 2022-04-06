#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n = 1;
	double An, sum = 0, sum1 = 0, sum2 = 0;
	for (n; n < 100; n++)
	{
		An = n * sin(n);
		sum += An;
		if (An > 0)
		{
			sum1 += An;
		}
		if (abs(An) < 0.5)
		{
			sum2 += An;
		}
	}
	cout << "Сумма = " << sum << endl;
	cout << "Сумма положительных из 100 = " << sum1 << endl;
	cout << "Сумма где модуль меньше 0.5 = " << sum2 << endl;
	return (0);
}