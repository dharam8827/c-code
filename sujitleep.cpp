#include <iostream>
using namespace std;
int main()
{
    int yr;
    cout << "Enter year: ";
    cin >> yr;

    if (yr % 100 == 0)
    {
        if (yr % 400 == 0)
        {
            cout << "it is a LEAP";
        }
        else
        {
            cout << "it is NOT a LEAP";
        }
    }
    else
    {
        if (yr % 4 == 0)
        {
            cout << "it is a LEAP";
        }
        else
        {
            cout << "it is NOT a LEAP";
        }
    }
}
