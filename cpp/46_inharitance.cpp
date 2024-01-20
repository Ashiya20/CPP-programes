#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

// Derived Class Syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member/method/etc...
}

Note:-
1. Default Visibility Mode is private
2. Public Visibility Mode: Public members of the base class  becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

// Creating a programmer class derived from Employee class
class Progerammer : public Employee
{
public:
    int languageCode;
    Progerammer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), liza(2);
    cout << harry.salary << endl;
    cout << liza.salary << endl;
    Progerammer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}