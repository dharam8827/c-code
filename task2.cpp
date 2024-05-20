#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three number\n";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << "It is A greater";
    }
    else if (b >= a && b >= c)
    {
        cout << "It is B greater";
    }

    else
    {
        cout << "C is greater";
    }
}