#include <iostream>
using namespace std;
//Function prototype
// syntax
// type function-name (arguments);

int sum(int a, int b); //---> Acceptable
// int sum(int a, b); ---> Not Acceptable
// int sum(int, int); ---> Acceptable

int main()
{
    int num1 , num2;
    cout<<"Enter the first number "<<endl;
    cin>>num1;
    cout<<"Enter the second number "<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    return 0;
}
int sum(int a, int b){
    // formal parameter a and b will be taking values from actual parameters num1 and num2  
    int c = a+b;
    return c;
}