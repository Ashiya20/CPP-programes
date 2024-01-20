// there are three type of control structures in cpp
// 1. sequence structure
// 2. selection structure ---> if else, switch case
// 3. loop structure
#include <iostream>
using namespace std;

int main()
{
    int age;
    //*************if else**************

    cout<<"Tell me your age"<<endl;
    cin>>age;
    // if(age<18){
    //     cout<<"You cannot came to my party "<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party "<<endl;
    // }
    // else{
    //     cout<<"You can come to my party "<<endl;
    // }
    //************switch case**************

    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "you are 22" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    return 0;
}