#include <iostream>
using namespace std;

int main(){
    int a = 32;
    int *ptr;
    ptr = &a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value if a is "<<*ptr<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<ptr<<endl;
    return 0;
}