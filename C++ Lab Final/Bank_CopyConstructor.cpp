#include <iostream>
using namespace std;
class Bank
{
private:
    int acc;
    double salary;

public:
    Bank() : acc(1), salary(0.0) {}
    Bank(int a, double b) : acc(a), salary(b) {}
    Bank(Bank &obj)
    {
        acc = obj.acc;
        salary = obj.salary;
    }
    void display()
    {
        cout << "Account : " << acc << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main()
{
    Bank b1;
    Bank b2(12, 1222.93);
    Bank b3(b2);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}