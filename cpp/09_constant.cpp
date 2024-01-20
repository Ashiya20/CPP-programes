#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    cout<<a<<endl;
    a = 5;
    cout<<a<<endl;

    // Constant in cpp
    const int b = 45;
    cout<<b<<endl; 
    // b = 25 ---> this will throw an error because b is a constant and it cannot change after declaring
    return 0;
}