// What is a pointer ---> datatype which holds the address of other datatypes

#include <iostream>
using namespace std;

int main()
{
    int a=3;
    int *b = &a;
    // & ---> (Address of) operater 
    cout<<"The adderess of a is "<<&a<<endl;
    cout<<"The adderess of a is "<<b<<endl;

     // * ---> (Value at) Dereferancing operater
    cout<<"The value at address b is "<<*b<<endl;

    //Pointer to pointer
    int **c = &b;
    cout<<"The adderess of b is "<<&b<<endl;
    cout<<"The adderess of b is "<<c<<endl;
    cout<<"The value at adderess c is "<<*c<<endl;
    cout<<"The value at adderess value at(value at(c)) is "<<**c<<endl;
    return 0;
}