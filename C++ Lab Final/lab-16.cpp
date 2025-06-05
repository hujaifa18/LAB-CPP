// C++ Program to Reverse a Number
#include <iostream>
using namespace std;
int main()
{
    int n, reversed = 0;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    cout << reversed << endl;
    return 0;
}