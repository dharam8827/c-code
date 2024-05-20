#include <iostream>
using namespace std;
int main()
{
  char c;
  cout << "Enter any character:";
  cin >> c;
  if (c >= 97 && c <= 122)
  {
    if (c == 'z')
    {

    }
    else
    {
      cout << char(c - 32);
    }
  }
}