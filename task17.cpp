#include <iostream>
using namespace std;
int main()
{
    float profit, loss, sel, cost;
    cout << "Enter any number :";
    cin >> sel >> cost;
    profit = sel - cost;
    if (profit > 0)
    {
        cout << "It is profit";
    }
    else if (loss > 0)
    {
        cout << "It is loss";
    }
    else
    {
        cout << "it is equal";
    }
}