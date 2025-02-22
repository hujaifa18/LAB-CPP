#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary;

public:
    // properties or attributes
    string name;
    string dept;
    string subject;
    // non-parameterized constructor
    Teacher()
    {
        dept = "CSE";
    }
};
int main()
{
    Teacher t1;

    t1.dept;
    cout << t1.dept << endl;

    return 0;
}