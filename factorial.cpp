#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    i=n-1;
    for(i; i>=1; i--)
    {
       n=n*i;
    }
    cout<<n;
}