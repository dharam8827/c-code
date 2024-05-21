#include <iostream>
using namespace std;
int main()
{
    int psw,a=1;
    cout << "Enter psw :"<<endl;
    cin >> psw;
    do
    {
        if(psw==1024)
        {
            cout<<"You are welcome";
            break;
        }
        cout<<"Again password"<<a<<":\n";
        cin>>psw;
        a++;
    }while(a<=5);
    if(a>5)
    {
        cout<<"you are blocked";
    }
  
   
}