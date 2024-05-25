#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter any number :"<<endl;
    cin>>n;
  while (n!=0)
  {
    c++;
    n=n/10;
  }
  cout<<"total digit :"<<c;
  
}