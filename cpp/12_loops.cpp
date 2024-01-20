// There are 3 types of loops in cpp
// 1. for loop
// 2. while loop
// 3. do while loop

#include <iostream>
using namespace std;

int main()
{
    //*******for loop*********
    // syntax for for loop
    // for(initialization;condition;updation)
    // {
    //     loop body(c++ code);
    // }
    // for (int i = 1; i < 11; i++)
    // {
    //     cout<<i<<endl;
    // }

    //************while loop*******
    // syntax
    // while(condition)
    // {
    //     c++ stetments;
    // }
    // int a = 1;
    // while(a<=10)
    // {
    //     cout<<a<<endl;
    //     a++;
    // }

    //********do while loop*********
    // syntax 
    // do
    // {
    //     c++ statements;
    // }while(condition);
    int i = 1;
    do
    {
        cout<<i<<endl;
        i++;
    } while (i<=40);
    
    return 0;
}