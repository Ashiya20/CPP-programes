#include <iostream>
using namespace std;

int main()
{
    //******break statement*********
    // for(int i=0; i<4; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==2){
    //         break;
    //     }
    // }

    //******continue statement*******
    for (int i = 0; i < 4; i++)
    {
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}