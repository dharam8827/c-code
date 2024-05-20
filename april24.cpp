#include<iostream>
using namespace std;
int main()
{
    //ternary operator
    int age;
    int r;
    cout<<"enter your age";
    cin>>age;
    // r=(age>18)?1:0;
    // cout<<r;
    age>18?cout<<" u can vote": cout<<"u can't";
}