#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter principle\n";
    cin>>p;
    cout<<"Enter rate of interest \n";
    cin>>r;
    cout<<"Enter time\n";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"simple interest="<<si<<"\n";
    cout<<"total amount ="<<si+p;
    
}