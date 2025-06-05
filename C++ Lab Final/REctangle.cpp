#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double breadth;

public:
    Rectangle() : length(1.0), breadth(1.0) {}
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double getArea()
    {
        return length * breadth;
    }
    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Breadth : " << breadth << endl;
        cout << "Area : " << getArea() << endl;
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2(5, 10);
    cout << "Rectangle 1 : \n";
    r1.display();
    cout << "Rectangle 1 : \n";
    r2.display();
    return 0;
}