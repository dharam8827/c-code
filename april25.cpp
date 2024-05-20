#include<iostream>
using namespace std;
// int b=12; //global
int main()
{
    // int a,b;
    // cout<<"Enter 2 number\n";
    // cin>>a>>b;
// symbolic operator 

int a=90; 
int &b=a;//reference varable
b++;
cout<<a<<"\n";
cout<<b<<"\n";

}