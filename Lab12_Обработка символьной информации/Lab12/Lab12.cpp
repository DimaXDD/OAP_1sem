//Из предложения удалить все символы, совпадающие с символом, введенным с клавиатуры.
#include <iostream>
#include <string>
int main() {
    using namespace std;
    setlocale(LC_ALL, "RUS");
    string s;
    cout << "Введите заданное предложение: ";
    cin >> s;
    char c;
    cout << "Введите символ, который нужно удалить: ";
    cin >> c;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            s.erase(i, 1); i--;
        }
    }
    cout << s;
}