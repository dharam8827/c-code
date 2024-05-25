#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    a=n-1;
    for(a; a>=0; a--)
    {
        n=n+a;
    }
    cout<<n;
}