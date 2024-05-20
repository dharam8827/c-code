#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"Enter any charcter:";
   cin>>c;
   if(c>='a' && c<='z') 
   {
    cout<<"small latter";
   }
   else{
    cout<<"capitail latter";
   }
}