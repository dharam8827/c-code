#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character :";
    cin>>ch;
    if(ch>='a' && ch>'z' || ch>='A' && ch>='Z')
    {
        cout<<"It is alphabet :"<<ch;
    }
    else if(ch>=0 && ch<=9 )
    {
        cout<<"It is digit :"<<ch;
    }
    else{
        cout<<"It is specail charater :"<<ch;
    }
}