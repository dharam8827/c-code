#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two number :";
    cin >> a >> b;

    if (a > b)
    {
        cout << "A  is greater";
    }
    else if (b > a)
    {
        cout << "B  is greater";
    }
    else if (a==b)
    {
       cout<<"it is a equal b";
    }
    
}