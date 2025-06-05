#include <iostream>
using namespace std;
class Car
{
private:
    string brand;
    string model;
    double price;

public:
    Car() : brand("Unknown"), model("Unknown"), price(0.0) {}
    Car(string b, string m, double p) : brand(b), model(m), price(p) {}
    Car(Car &obj)
    {
        brand = obj.brand;
        model = obj.model;
        price = obj.price;
    }
    void display()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Price : " << price << endl;
    }
};
int main()
{
    Car c1;
    Car c2("Toyota", "Supra", 1000000.2900);
    Car c3(c1);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}