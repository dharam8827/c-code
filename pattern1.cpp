#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(r=1; r<=3; r++)
    {
        for(c=1; c<=r; c++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
}