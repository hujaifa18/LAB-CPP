#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int id;

public:
    Student() : name("Unknown"), id(0) {}
    Student(string n, int i) : name(n), id(i) {}
    Student(Student &obj)
    {
        name = obj.name;
        id = obj.id;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
    }
};
int main()
{
    Student s1;
    Student s2("Hujaifa", 18);
    Student s3("Rabbi", 13);
    Student s4(s2);
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}