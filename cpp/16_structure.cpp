#include <iostream>
using namespace std;

 typedef struct employee
{
    int Id;
    char favchar;
    float salary;

}ep;

int main()
{
    struct employee liza;
    ep fiza;
    liza.Id = 1;
    liza.favchar = 'c';
    liza.salary = 2100.500;
    cout<<liza.Id<<endl;
    cout<<liza.favchar<<endl;
    cout<<liza.salary<<endl;

    return 0;
}