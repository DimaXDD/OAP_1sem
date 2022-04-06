#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Вы хотите купить самолёт? (1-да, 2-нет)");
	cin >> k;
	switch (k)
	{
	case 1: { puts("Какой? (1- Cirrus SR22, 2-Gulfstream IV, 3-Cessna Citation III, 4-Boening-747)");
		cin >> k;
		switch (k)
		{
		case 1: puts("Отличный выбор"); break;
		case 2: puts("Хороший выбор"); break;
		case 3: puts("Не самый лучший самолёт, но пойдёт"); break;
		case 4: puts("Сомнительный выбор"); break;
			break;
		}
		break;
	}
	case 2: puts("Ну и правильно, зачем он вам :)"); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;
}
