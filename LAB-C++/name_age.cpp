#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;

public:
    void setname(string n) { name = n; }
    void setage(int a)
    {
        if (a > 0)
            age = a;
        else
            cout << "Invalid age!" << endl;
    }
    string getname() { return name; }
    int getage() { return age; }
};
int main()
{
    person person1;
    person1.setname("BOB");
    person1.setage(30);
    cout << "Name : " << person1.getname() << endl;
    cout << "Age : " << person1.getage() << endl;
    return 0;
}
