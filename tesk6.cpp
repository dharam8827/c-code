#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year :";
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << " It is leep year :" << year;
    }
    else
    {
        cout << "It is not leep year :" << year;
    }
}