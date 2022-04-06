#include <iostream>
#include <string>
using namespace std;
string deleteCollocation(string str)
{
    const char* token = "\"";
    size_t pos1 = 0, pos2 = 0;

    while ((pos1 = str.find(token, pos1)) != string::npos &&
        (pos2 = str.find(token, pos1 + 1)) != string::npos)
        str.erase(pos1, pos2 - pos1 + 1);

    return str;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    string str;
    getline(cin, str);
    cout << deleteCollocation(str) << endl;
}