#include<iostream>
using namespace std;
int main()
{
    int p,c,m,total;
    float per;
    cout<<"Enter marks of physics: ";
    cin>>p;
    cout<<"Enter marks of chemistry: ";
    cin>>c;
    cout<<"Enter marks of math: ";
    cin>>m;
    total=p+c+m;
    per=total/3;
    if(p>100 || c>100 || m>100)
    {
        cout<<"Invalid entry";
    }
    else if (m<35 && c<35 && p>=35)
    {
        cout<<"Fail";
    }
    else if (m<35 && p<35 && c>=35)
    {
        cout<<"Fail";
    }
    else if (p<35 && c<35 && m>=35)
    {
        cout<<"Fail";
    }
    else if (p<35 )
    {
        cout<<"Physics in supply";
    }
    else if (c<35 )
    {
        cout<<"chemistry in supply";
    }
    else if (m<35 )
    {
        cout<<"math in supply";
    }
    else if (per>60)
    {
        cout<<"Frist division: "<<per<<"%";
    }
    else if (per>50 && per<=60)
    {
        cout<<"Second division: "<<per<<"%";
    }
    else 
    {
        cout<<"Third division: "<<per<<"%";
    }

    
}