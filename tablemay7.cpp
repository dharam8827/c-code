#include<iostream>
using namespace std;
int main()
{
    int a,b=1;
    cout<<"Enter any number: ";
    cin>>a;
    table:
    cout<<a*b<<"\n";
    b++;
    if(b<=10)
    {
        goto table;
    }
    cout<<"\n done";
}