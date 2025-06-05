// C++ Program to Check Whether Number is Even or Odd
#include <iostream>
using namespace std;
class Check
{
private:
    int a;

public:
    void setValue(int a);
    void Display()
    {
        if (a % 2 == 0)
            cout << "Even\n";
        else
            cout << "Odd\n";
    }
};
void Check ::setValue(int a1)
{
    a = a1;
}
int main()
{
    Check c;
    int x;
    cout << "Enter a Number : ";
    cin >> x;
    c.setValue(x);
    c.Display();
    return 0;
}