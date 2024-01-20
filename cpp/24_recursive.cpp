#include <iostream>
using namespace std;

//fibbonacci function
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
int main()
{
    //Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}