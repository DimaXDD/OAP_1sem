#include <iostream>
int main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	double a, t = 3, y = 0.4, z, w, j;
	for (j = 1; j <= 3; j++)
	{
		do
		{
			cout << "Введите a" << endl;
			cin >> a;
			z = sqrt(t * a + y) + 4 * exp(-2 * j);
			w = log(0.4 * y) / ((7 * a) - z);
			cout << "z = " << z << endl;
			cout << "w = " << w << endl;
			t = t + 0.2;
		} while (t <= 4);
		{
			
		}
	}
}