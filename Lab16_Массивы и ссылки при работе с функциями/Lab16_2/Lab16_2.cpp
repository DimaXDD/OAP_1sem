//Написать функцию с переменным числом параметров для перевода чисел из десятичной системы счис-ления в двоичную. 
//С помощью этой функции перевести различные числа из десятичной системы счисления в двоичную

#include <iostream>
#include <math.h>
using namespace std;
void bla()
{
}

template <typename... TT>
void bla(unsigned int n, TT... nn)
{
    if (!n)
        cout << '0';
    else
    {
        unsigned int m = 0x01 << ((sizeof(n) * 8) - 1);
        while ((m & n) == 0)
            m >>= 1;

        for (; m; m >>= 1)
            cout << ((n & m) == 0 ? '0' : '1');
    }

    cout << endl;

    bla(nn...);
}

int main()
{
    bla(6, 4, 5, 1, 2, 3, 0);
}