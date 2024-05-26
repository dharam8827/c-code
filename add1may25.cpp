#include<iostream> 
using namespace std;
int main()
{
    int n,i,frist;
    cout<<"Enter any number :";
    cin>>n;
    i=n%10;
    for(i;n!=0;)
    {
        frist=n;
        n=n/10;

    }
    cout<<"Sum="<<i+frist;
}