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
    //static function
    static void getCount(void){
        // cout<<id; // Throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// count is the static data member of class Employee
int Employee::count = 100; //Default value is 0
int main()
{
    Employee harry, liza, fiza;
    // harry.id = 1;
    // harry.count = 1; //cannot do this as id and count are private

    harry.setdata();
    harry.getdata();
    Employee::getCount(); //declaration of static function with scop resolution
    
    liza.setdata();
    liza.getdata();
    Employee::getCount();

    fiza.setdata();
    fiza.getdata();
    Employee::getCount();
    return 0;
}