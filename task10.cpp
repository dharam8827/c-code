#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character :";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"It is upercase :"<<ch;
    }
    else if(ch>='a' && ch<='z')
    {
        cout<<" It is lowercase :"<<ch;
    }
    else{
        cout<<"It is invailid :"<<ch;
    }
}
