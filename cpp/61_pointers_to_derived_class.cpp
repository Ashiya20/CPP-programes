#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_Base " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    Base *base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_pointer->var_base = 34;
    // base_pointer->var_derived = 134; // will throw an error
    base_pointer->display();

    base_pointer->var_base = 3400;
    base_pointer->display();

    Derived *derived_pointer;
    derived_pointer = &obj_derived;

    derived_pointer->var_base = 9448;
    derived_pointer->var_derived = 98;
    derived_pointer->display();

    return 0;
}