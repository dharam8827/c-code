#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,p;
    cout<<"enter any no.";
    cin>>n;
    a=n/100;
    b=n%100;
    c=b/10;
    d=b%10;
    p=(a)+(c*10)+(d*100);
    if(n>100 && n<=999)
    {
        cout<<"palindrom :"<<p;
    }
    else{
        cout<<"not";
    }
    
}