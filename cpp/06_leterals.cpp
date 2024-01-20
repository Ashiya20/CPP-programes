#include <iostream>
using namespace std;

int main()
{
    float a = 34.4f;   //by default every decimal number is conseder to be double in cpp
    long double b = 34.4l;
    cout<<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
    cout<<"The sizeof 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The sizeof 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The sizeof 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The sizeof 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The sizeof 34.4L is "<<sizeof(34.4L)<<endl;
    return 0;
}