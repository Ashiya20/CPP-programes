#include <iostream>
using namespace std;

int main()
{
    enum meal{breakfast, lunch, dinner};
    meal m1 = breakfast;
    cout<<m1;
    // cout<<breakfast<<endl;
    cout<<lunch<<endl;
    // cout<<dinner<<endl;
    //it gives number to the values like breakfast is 0 , lunch is 1, dinner is 2

    return 0;
}