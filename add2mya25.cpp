#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,m;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    while(n!=0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;

    }
    cout<<"sum="<<sum;
}