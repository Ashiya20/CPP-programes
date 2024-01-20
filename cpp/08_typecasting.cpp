#include <iostream>
using namespace std;

int main()
{
    // converting  a datatype into another datatype is typecasting
    int a = 45;
    float b = 45.5;

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    return 0;
}