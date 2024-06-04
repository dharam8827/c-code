#include<iostream>
using namespace std;
int main()
{
    int num,i=0;
    cout<<"Enter any number :";
    cin>>num;
    while(num!=0)
    {
     
     i=i*10+(num%10);
     num=num/10;
    }
   cout<<"="<<i;
}