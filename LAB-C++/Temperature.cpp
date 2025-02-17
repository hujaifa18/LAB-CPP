#include <iostream>
using namespace std;
class Temperature
{
private:
    double celsius;

public:
    void setcelsius(double c) { celsius = c; }

    double getcelsius() { return celsius; }
    double getfahrenheit() { return (celsius * 9 / 5) + 32; }
};
int main()
{
    Temperature person1;
    person1.setcelsius(40);

    cout << "Celsius : " << person1.getcelsius() << endl;
    cout << "Fahrenheit : " << person1.getfahrenheit() << endl;
    return 0;
}