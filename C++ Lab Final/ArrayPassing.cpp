#include<iostream>
using namespace std;
class Employee
{
    int id;
    int salary;
    public:
    void setid(void)
    {
        salary = 1200;
        cout<<"Enter id of employee : ";
        cin>>id;
        cout<<endl;
    }
    void getid(void)
    {
        cout<<"The id of employee is : "<<id<<endl;
        cout<<"The salary is : "<<salary<<endl;
    }
};
int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[4].setid();
        fb[4].getid();
    }
    return 0;
    
}