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

    // parameterized constructor
    Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Subject : " << subject << endl;
    }
};
int main()
{
    Teacher t1("Hujaifa", "CSE", "C++", 25000);
    Teacher t2(t1);//default copy-constructor
    t2.getInfo();

    return 0;
}