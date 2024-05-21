#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int u;
    cout << "Enter any no :";
    cin >> u;
    if (u > 0)
    {
        do
        {
            cout << u * a << endl;
            a++;
        } while (a <= 10);
    }
    else
    {
        cout << "not allowed";
    }
}