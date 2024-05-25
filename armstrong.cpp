#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, d, sum;
    cout << "Enter 3 digit number :";
    cin >> n;
    if (n >= 100 && n<= 999)
    {
        a = n / 100; // 2
        b = n % 100; // 34
        c = b / 10;  // 3
        d = b % 10;  // 4
        sum = (a * a * a) + (c * c * c) + (d * d * d);

        if (sum == n)
        {
            cout << "amrstrom";
        }
        else
        {
            cout << "not";
        }
    }
}