/*dynamic means after making it (on run time) */
#include <iostream>
using namespace std;

class BanckDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BanckDeposite() {}
    BanckDeposite(int p, int y, float r); // r can be a value like 0.04
    BanckDeposite(int p, int y, int r);   // r can be a value like 14
    void show();
};

BanckDeposite ::BanckDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

BanckDeposite ::BanckDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BanckDeposite ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after "
         << years << " year is " << returnValue << endl;
}

int main()
{
    BanckDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();

    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BanckDeposite(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BanckDeposite(p, y, R);
    bd2.show();
    return 0;
}