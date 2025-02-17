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
    void display()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Price : " << price << endl;
    }
};
int main()
{
    Car car1;
    Car car2("Toyota", "Supra", 10000000);
    cout << "Car 1 details : " << endl;
    car1.display();
    cout << "\nCar 2 details : " << endl;
    car2.display();
    return 0;
}