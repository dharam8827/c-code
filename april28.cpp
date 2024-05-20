#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    float c, f;
    // cout<<9/5;
    cout << "Enter celsius:\n";
    cin >> c;
    f = c * 9 / 5 + 32;
    cout << "celsius into Fahrenheit=" << fixed << setprecision(2) << f;
    // float c,f;
    // cout<<"Enter fahrenheit\n";
    // cin>>f;
    // c=(f-32)*5/9;
    // cout<<"degree celsius\n"<<c;
}