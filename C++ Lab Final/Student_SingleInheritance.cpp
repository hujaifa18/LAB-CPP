#include <iostream>
using namespace std;
class Info
{
    int id;

public:
    void get_info()
    {
        cin >> id;
        cout << "Id is : " << id << endl;
    }
};
class Student : public Info
{
public:
    void print()
    {
        get_info();
    }
};
int main()
{
    Student s1;
    s1.print();
    return 0;
}