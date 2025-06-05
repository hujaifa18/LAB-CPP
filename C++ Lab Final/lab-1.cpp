//C++ Program to Print Number Entered by User
#include <iostream>
using namespace std;
class Number
{
private:
    int n;

public:
    int val;
    void setValue(int n);
    int getValue() { return val; }
    void Display()
    {
        cout << "Number is : " << n << endl;
    }
};
void Number ::setValue(int n1)
{
    n = n1;
}
int main()
{
    Number n;
    int input;
    cout << "Enter Number : ";
    cin >> input;
    n.setValue(input);
    n.Display();
    return 0;
}