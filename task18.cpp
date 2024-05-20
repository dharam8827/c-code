#include <iostream>
using namespace std;
int main()
{
    int p, c, m, b, com, per;
    cout << "Enter marks :\n";

    cin >> p >> c >> m >> b >> com;
    per = (p + c + m + b + com) / 5;
    if (per >= 100)
    {
        cout << "Enter valid marks";
    }
    else if (per >= 90)
    {
        cout << "grade A :" << per << "%";
    }
    else if (per >= 80)
    {
        cout << "grade B :" << per << "%";
    }
    else if (per >= 70)
    {
        cout << "grade C :" << per << "%";
    }
    else if (per >= 60)
    {
        cout << "grade D :" << per << "%";
    }
    else if (per >= 40)
    {
        cout << "grade E :" << per << "%";
    }
    else if (per <= 40)
    {
        cout << "fail";
    }
}