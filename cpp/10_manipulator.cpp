// endl is a manipulator in cpp 
// another manipulator is setw in cpp 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 3, b = 78, c = 12233;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<"**************"<<endl;

    // with setw
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    return 0;
}