#include <iostream>
using namespace std;

//This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4    4 5
    a = b;               //4    5 5
    b = temp;            //4    5 4 
}

//call by reference using c++ pointer variable
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference using c++ reference variable
// int & swapRaference(int &a, int &b){
void swapRaference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    // return a;
}
int main()
{
    int x = 4, y = 5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swap(x, y); //This will not swap a and b
    // swapPointer(&x, &y);//This will swap a and b using pointer reference
    swapRaference(x, y);//This will swap a and b using reference variable
    // swapRaference(x, y) = 455;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}