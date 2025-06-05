//C++ Program to Add Two Numbers
#include <iostream>
using namespace std;
class Sum
{
private:
    int a, b;

public:
    int sum;
    void setValue(int a, int b);
    int getValue()
    {
        sum = a + b;
        return sum;
    }
    void Display()
    {
        cout << "Sum is : " << getValue() << endl;
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