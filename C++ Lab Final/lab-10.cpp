//C++ Program to Check Leap Year
#include <iostream>
using namespace std;
class Leap
{
private:
    int year;

public:
    bool Checker(int year)
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Leap l;
    int year;
    cout << "Enter Year : ";
    cin >> year;
    if (l.Checker(year))
    {
        cout << year << " is a leap year\n";
    }
    else
    {
        cout << year << " is not a leap year\n";
    }
}