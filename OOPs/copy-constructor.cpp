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
    //copy-constructor
    Teacher(Teacher &obj)
    {
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
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
    Teacher t2(t1);
    t2.getInfo();
    return 0;
}