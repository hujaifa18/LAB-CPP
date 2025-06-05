//C++ Program to Find All Roots of a Quadratic Equation
#include <iostream>
#include <cmath>
using namespace std;
class Root
{
private:
    double a, b, c;

public:
    void setCoefficient()
    {
        cout << "Enter Coefficient : " << endl;
        cin >> a >> b >> c;
    }
    void findRoots()
    {
        double discriminant = (b * b) - (4 * a * c);
        if (discriminant > 0)
        {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and different\n";
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        }
        else if (discriminant == 0)
        {
            double root = -b / (2 * a);
            cout << "One real root\n";
            cout << "Root is = " << root << endl;
        }
        else
        {
            double real = -b / (2 * a);
            double imaginary = (-discriminant) / (2 * a);
            cout << "Roots are complex and different\n";
            cout << "Root 1 = " << real << " + " << imaginary << "i" << endl;
            cout << "Root 2 = " << real << " - " << imaginary << "i" << endl;
        }
    }
};
int main()
{
    Root r;
    r.setCoefficient();
    r.findRoots();
    return 0;
}