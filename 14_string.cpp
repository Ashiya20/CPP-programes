#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "liza";
    cout<<"The name is "<<name<<endl;
    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"The name is "<<name.substr(0,3)<<endl;
    return 0;
}