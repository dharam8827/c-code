#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any charater :";
    cin>>ch;
    if(ch=='A' || ch=='E' || ch=='O' || ch=='U' || ch=='I')
    {
        cout<<"It is vowel :"<<ch;
    }
    else if (ch=='a' || ch=='e' || ch=='o' || ch=='u' || ch=='i')
    {
       cout<<"It is vowel :"<<ch;
    }
    
    else
    {
        cout<<"It is  consonant :"<<ch;

    }
}