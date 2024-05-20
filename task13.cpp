#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    cout << "Eneter any Amount :";
    cin >> a;
    n = a / 100;
    cout << "notes of 100 :" << n << "\n";
    b = a - n * 100;
    n = b / 50;
    cout << "Notes of 50 :" << n << "\n";
    b = b - n * 50;
    n = b / 20;
    cout << "notes of 20 :" << n << "\n";
    b = b - n * 20;
    n = b / 10;
    cout << "Notes of 10 :" << n << "\n";
    b = b - n * 10;
    n = b / 5;
    cout << "Notes of 5 :" << n << "\n";
    b = b - n * 5;
    n = b / 2;
    cout << "Notes of 2 :" << n << "\n";
    b = b - n * 2;
    n = b / 1;
    cout << "Notes of 1 :" << n << "\n";
}