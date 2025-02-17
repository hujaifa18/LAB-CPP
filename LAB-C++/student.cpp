#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    string rollNumber;
    double CGPA;

public:
    void setname(string n) { name = n; }
    void setrollNumber(string r) { rollNumber = r; }
    void setCGPA(double result)
    {
        if (result >= 0.0 && result <= 4.00)
            CGPA = result;
    }
    string getname() { return name; }
    string getrollNumber() { return rollNumber; }
    double getCGPA() { return CGPA; }
};
int main()
{
    Student person1;
    person1.setname("Hujaifa");
    person1.setrollNumber("06224205101018");
    person1.setCGPA(3.75);
    cout << "Name : " << person1.getname() << endl;
    cout << "Roll Number : " << person1.getrollNumber() << endl;
    cout << "CGPA : " << person1.getCGPA() << endl;
    return 0;
}