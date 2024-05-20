#include<iostream>
using namespace std;
int main()
{
int a,b;
char c;
cout<<"Enter 2 number :\n";
cin>>a>>b;
cout<<"select A for+,M for multi and D for / :";
cin>>c;
switch (c)
{
    case 'A':
    {
    cout<<a+b;
    break;
    }
    case 'M':
    {
        cout<<a*b;
        break;
    }
    case 'D':
    {
        cout<<a/b;break;
    }
    default:
    {
     cout<<"invalid choice";
    }
}
}