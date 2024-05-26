#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    for(i=1; i<=6; i++)
    {
        cout<<i<<endl;
        n=i+n;
    }
    cout<<n;
}