#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout<<"Enter number :"<<endl;
    cin>>n;
  for(s=1; s<=n/2; s++)
  {
    if(s*s==n)
    {
        cout<<s;
        break;
    }
  }

}