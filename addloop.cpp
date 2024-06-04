#include<iostream>
using namespace std;
int main()
{
    int n,a,s=0;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    while(n!=0 )
    {
        s=s+(n%10);
        n=n/10;
    }
    cout<<s;
}