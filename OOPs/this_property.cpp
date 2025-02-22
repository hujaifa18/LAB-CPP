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
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
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
    t1.getInfo();

    return 0;
}