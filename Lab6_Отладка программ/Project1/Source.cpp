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
		cout << "����� ����� n = " << n << endl;
		cout << " " << endl;
		cout << " ��� �������� An = " << An << endl;
		cout << " ";
	}
	cout << " " << endl;
	cout << "����� = " << sum;
}