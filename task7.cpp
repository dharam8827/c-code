#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character :";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "It is alphabet :" << ch;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "It is alphabet :" << ch;
    }
    else
    {
        cout << "it is not alphabet :" << ch;
    }
}