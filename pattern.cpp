#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(r=97; r<=99; r++)
    {
        for(c=97; c<=r; c++)
        {
            cout<<char(r)<<"\t";

        }
     
        cout<<"\n";
    }
}