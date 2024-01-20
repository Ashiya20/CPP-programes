#include <iostream>
using namespace std;

int main(){
    // bitwise operator &,|,<<,>>,~,^
    int a = 60;    //60 = 0011 1100
    int b = 13;    //13 = 0000 1101
    int c;
    c= a&b;        //12 = 0000 1100
    cout<<"Value of c is: "<<c<<endl;

    c= a|b;        //61 = 0011 1101
    cout<<"value of c is: "<<c<<endl;

    c= a^b;        //49 = 0011 0001
    cout<<"value of c is: "<<c<<endl;

    c=~a;          //-61 = 1100 0011
    cout<<"value of c is: "<<c<<endl;

    c=a<<2;        //240 = 1111 0000
    cout<<"value of c is: "<<c<<endl;

    c=a>>2;        //15 = 0000 1111
    cout<<"value of c is: "<<c<<endl;

  
    return 0;

}