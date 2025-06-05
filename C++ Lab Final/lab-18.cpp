// C++ Program to Find ASCII Value of a Character
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    int ascii = static_cast<int>(ch);
    cout << ascii << endl;
    return 0;
}