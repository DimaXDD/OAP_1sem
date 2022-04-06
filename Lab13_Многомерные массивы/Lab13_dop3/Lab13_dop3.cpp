//Для заданной матрицы размером 6 на 6 найти такие значения к, что k-я строка матрицы совпадает с k-м столбцом. Найти сумму элементов в тех строках, которые содержат хотя бы один отрицательный элемент.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    const int N = 3;
    int A[N][N];
    int k, sum;
    int i, j, max_count;
    srand(time(NULL));
    cout << "Какое максимальное значение элемента может быть у матрицы? ";
    cin >> max_count;
    cout << "Введите матрицу:" << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            A[i][j] = rand() % max_count;
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }
    //1
    cout << "Искомые номера для k-ых строки (столбца): ";
    for (int i = 0; i < N; i++)
    {
        k = 0;
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] == A[j][i])
                k++;
        }
        if (k == N)
            cout << i + 1 << " ";
    }
    cout << endl;
    //2
    cout << "Искомые суммы элементов:" << endl;
    for (int i = 0; i < N; i++)
    {
        k = 0;
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] < 0)
                k++;
        }
        if (k > 0)
        {
            sum = 0;
            for (int j = 0; j < N; j++)
            {
                sum += A[i][j];
            }
            cout << "Строка " << i + 1 << ": " << sum << endl;
        }
    }
}