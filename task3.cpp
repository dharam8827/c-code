#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter any number :";
    cin>>number;
    if(number>0){
        cout<<"number is positive :"<<number;
    }
    else if(number<0){
        cout<<"number is negtive :"<<number;
    }
    else if (number ==0)
    {
       cout<<"number is zero :"<<number;
    }
    
}