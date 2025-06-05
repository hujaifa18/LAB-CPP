// C++ Program to Swap Two Numbers
#include <iostream>
using namespace std;
class Swap
{
private:
    int a, b;

public:
    void setValue(int a, int b);
    void swap()
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void Display()
    {
        cout << "First : " << a << endl;
        cout << "Second : " << b << endl;
    }
};
void Swap ::setValue(int a1, int b1)
{
    a = a1;
    b = b1;
}
int main()
{
    Swap s;
    int x, y;
    cin >> x >> y;
    s.setValue(x, y);
    s.swap();
    s.Display();
    return 0;
}