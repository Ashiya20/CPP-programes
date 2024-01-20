#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample65.txt");
    out << "This is me" << endl;
    out << "This is also me \n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample65.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}