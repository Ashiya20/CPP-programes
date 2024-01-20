// static variable also called class variable
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};

// count is the static data member of class Employee
int Employee::count; //= 1000; //Default value is 0
int main()
{
    Employee harry, liza, fiza;
    // harry.id = 1;
    // harry.count = 1; //cannot do this as id and count are private

    harry.setdata();
    harry.getdata();

    liza.setdata();
    liza.getdata();

    fiza.setdata();
    fiza.getdata();
    return 0;
}