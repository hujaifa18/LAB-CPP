#include <iostream>
using namespace std;
class Id
{
    int id;

public:
    void get_id()
    {
        cin >> id;
        cout << "ID is : " << id << endl;
    }
};
class Mark
{
    int mark;

public:
    void get_mark()
    {
        cin >> mark;
        cout << "Mark is : " << mark << endl;
    }
};
class Student : public Id, public Mark
{
public:
    void print()
    {
        get_id();
        get_mark();
    }
};
int main()
{
    Student s;
    s.print();
    return 0;
}