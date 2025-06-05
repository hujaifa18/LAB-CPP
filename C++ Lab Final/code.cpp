#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
};
class Student : public Person
{
public:
    int roll;
    void getinfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << roll << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Hujaifa";
    s1.age = 21;
    s1.roll = 18;
    s1.getinfo();
    return 0;
}
