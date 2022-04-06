#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n = 1;
	double An, sum = 0;
	for (n; n < 100; n++)
	{
		An = n * sin(n);
		sum += An;
		cout << "Номер члена n = " << n << endl;
		cout << " " << endl;
		cout << " Его значение An = " << An << endl;
		cout << " ";
	}
	cout << " " << endl;
	cout << "Сумма = " << sum;
}