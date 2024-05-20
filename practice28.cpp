#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter 4digit no : ";
    cin>>a;
    a=a/1000+(a%1000)/100+(a%100)/10+a%10;
    cout<<a;
}