#include<iostream>
#include<string>
using namespace std;
class Teacher
{
    private:
    double salary;
    public:
    //properties or attributes
    string name;
    string dept;
    string subject;


    //methods or member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    //setter 
    void setSalary(double s)
    {
        salary = s;
    }

    //getter
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    Teacher t1;
    t1.name = "Hujaifa";
    t1.subject = "C++";
    t1.dept = "CSE";
    t1.setSalary(25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}