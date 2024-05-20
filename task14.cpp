#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter any value :";
    cin >> a >> b >> c;
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
    {
        cout << "It is valid tringle";
    }
    else
    {
        cout << "It is not valid tringle";
    }
}