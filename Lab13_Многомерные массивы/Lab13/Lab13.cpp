//В заданном массиве A(N, N) вычислить две суммы элементов, расположенных выше и ниже главной диагонали.

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int N = 3;
    int mas[N][N];
    int i, j, sum, max_count;
    srand(time(NULL));
    cout << "Какое максимальное значение элемента может быть у матрицы? ";
    cin >> max_count;
    cout << "Матрица: " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            mas[i][j] = rand() % max_count;
            cout << mas[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    int s = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i < j) //Если (номер строки < номера столбца) - тогда мы получаем элементы над главной диагональю. Если(номер строки > номера столбца) - тогда мы получаем элементы под главной диагональю.
            {
                cout << mas[i][j] << ", ";
                s += mas[i][j];
            }
        }
    }
    cout << "Сумма элементов, которые выше главной диагонали: " << s;
    cout << "\n";
    int s1 = 0;
    cout << "\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i > j)
            {
                cout << mas[i][j] << ", ";
                s1 += mas[i][j];
            }
        }
    }
    cout << "Сумма элементов, которые ниже главной диагонали: " << s1;
}