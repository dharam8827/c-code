#include <iostream>
using namespace std;
int main()
{
    int num1, num2, max;
    cout << "Enter number1 :" << "\n";
    cin >> num1;
    cout << "Enter number2 :" << "\n";
    cin >> num2;
    max = num1 < num2 ? num1 : num2;
    while (true)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "lcm :" << max;
            break;
        }
        max++; 
    }
}