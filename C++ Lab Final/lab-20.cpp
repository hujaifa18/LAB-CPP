// C++ Program to Check Whether a Number is Palindrome or Not
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    bool isPalindrome = true;
    int length = str.length();
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "Palindrome\n";
    }
    else
    {
        cout << "Not Palindrome\n";
    }
    return 0;
}