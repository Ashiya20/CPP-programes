#include <iostream>
using namespace std;

int main(){
    int index = 0;
    // while loop
    while(index<10){
        cout<<"We are at index number "<<index<<endl;
        index++;
    }
    cout<<"***********************************************************"<<endl;
    // do while loop
    int index1 = 0;
    do{
        cout<<"WE are at index number "<<index1<<endl;
        index1++;
    }while(index1>90);
    cout<<"****************************************************************"<<endl;
    // for loop
    for (int i = 0; i < 12; i++)
    {
       cout<<"The value of i is: "<<i<<endl;

    }
    
    return 0;
}