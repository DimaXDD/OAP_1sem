//Выполнить задание без хранения последовательностей. Дано  натуральное  k . Определить k-ю цифру  последовательно-сти: 1248163264..., в которой выписаны подряд степени 2.

#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double n, i;
	int k;
	cout << "Введите число k: " << endl;
	cin >> k;
	for (i = 0; i < 1000; i++)
	{
		n = 0;
		n = pow(2, i);
		if (i + 1 == k) break;
	}
	cout << n << " - элемент последовательности под номером " << k << endl;
}