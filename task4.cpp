#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter Number :";
    cin>>number;
    if (number%5==0 && number%11==0)
    {
        cout<<"It is divisible 5 and 11";
    }
    else{
        cout<<"it is not divisible";
    }
    
}