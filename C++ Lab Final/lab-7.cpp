//C++ Program to Find Largest Number Among Three Numbers
#include <iostream>
using namespace std;
class Largest
{
private:
    int a;
    int b;
    int c;

public:
    void setValue()
    {
        cout << "Enter Numbers : " << endl;
        cin >> a >> b >> c;
    }
    void check()
    {
        if (a > b && a > c)
        {
            cout << a << " is largest\n";
        }
        else if (b > a && b > c)
        {
            cout << b << " is largest\n";
        }
        else
        {
            cout << c << " is largest\n";
        }
    }
};
int main()
{
    Largest l;
    l.setValue();
    l.check();
    return 0;
}