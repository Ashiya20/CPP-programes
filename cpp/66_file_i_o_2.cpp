#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting our file with hout
    ofstream hout("sample65.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name " << endl;
    cin >> name;

    // Writing a string to the file
    hout << name + " is my name";
    hout.close();

    ifstream hin("sample65.txt");
    string content;
    hin >> content;
    // getline(hin, content);
    cout << "The content of this file is: " << content << endl;
    hin.close();
    return 0;
}