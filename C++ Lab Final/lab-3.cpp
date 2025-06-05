// C++ Program to Find Quotient and Remainder
#include <iostream>
using namespace std;
class Sum
{
private:
    int a, b;

public:
    int q, r;
    void setValue(int a, int b);
    int getQuotient()
    {
        q = a / b;
        return q;
    }
    int getRem()
    {
        r = a % b;
        return r;
    }
    void Display()
    {
        cout << "Quotient is : " << getQuotient() << endl;
        cout << "Remainder is : " << getRem() << endl;
    }
};
void Sum ::setValue(int a1, int b1)
{
    a = a1;
    b = b1;
}
int main()
{
    Sum s;
    int x, y;
    cin >> x >> y;
    s.setValue(x, y);
    s.Display();
    return 0;
}