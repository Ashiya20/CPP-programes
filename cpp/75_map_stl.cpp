#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> markMap;
    markMap["harry"] = 98;
    markMap["liza"] = 87;
    markMap["jack"] = 59;

    markMap.insert({{"kozume", 95}, {"kuroo", 18}});
    map<string, int>::iterator iter;
    for (iter = markMap.begin(); iter != markMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << "The size is: " << markMap.size() << endl;
    cout << "The max size is: " << markMap.max_size() << endl;
    cout << "The empty return value is: " << markMap.empty() << endl;
    return 0;
}