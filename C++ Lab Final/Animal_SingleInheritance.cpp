#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "I can eat\n";
    }
    void sleep()
    {
        cout << "I can sleep\n";
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I can bark!woof!woof!\n";
    }
};
int main()
{
    Dog d;
    d.eat();
    d.sleep();
    d.bark();
    return 0;
}