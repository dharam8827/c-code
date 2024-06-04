// arithmetic +,-*,
#include<iostream>
using namespace std;
int main()
{
    // int a=109;
    // int b=10;
    // cout<<a%b;
    int n;
    cout<<"entr 3 digit no";
    cin>>n;//534
    // int b=a/100;
    // int c=a%100;
    // int d=c/10;
    // int e=c%10;
    // cout<<b+d+e;
   n=(n/1000)+(n%1000)/100+(n%100)/10+n%10;
   cout<<n;

}