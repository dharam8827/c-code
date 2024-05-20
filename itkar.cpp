#include<iostream>
using namespace std;
int sum_resursive(int a) {
    if (a <= 9) {
        return a;
    } else {
        return sum_resursive(sum_resursive(a%10 + (a/10)));
    }
}

int main()
{
    int num ;
    cin>>num;
    int sum=0,r,copy;

    // while(num>0){
    //     r=num%10;
    //     sum=sum+r;
    //     num/=10;
    //     copy = sum;
        
    //     if (copy > 9) {
    //         sum=0;
    //         while(copy!=0){
    //         sum += copy % 10;
    //         copy /= 10;
    //         }
    //     } 
        

    // }
    int rs = sum_resursive(num);
    cout << rs;
    
}