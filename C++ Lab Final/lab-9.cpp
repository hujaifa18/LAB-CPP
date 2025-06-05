//C++ Program to Calculate Sum of Natural Numbers
#include <iostream>
using namespace std;
class sum
{
private:
    int n;

public:
    int sum = 0;
    int suminloop(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        return sum;
    }
};
int main()
{
    sum s;
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Sum of Natural number is = " << s.suminloop(n) << endl;
    return 0;
}