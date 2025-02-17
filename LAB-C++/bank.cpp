#include <iostream>
using namespace std;
class BankAccount
{
private:
    string accNum;
    double balance;
    string accholder;

public:
    void setAccNum(string Num) { accNum = Num; }
    void setbalance(double Tk)
    {
        if (Tk > 0)
            balance = Tk;
        else
            cout << "Invalid balance! Balance cannot be negative" << endl;
    }
    void setaccholder(string Name) { accholder = Name; }
    string getaccNum() { return accNum; }
    double getbalance() { return balance; }
    string getaccholder() { return accholder; }
};
int main()
{
    BankAccount person1;
    person1.setAccNum("102030");
    person1.setbalance(30000);
    person1.setaccholder("Rakib");
    cout << "Account Number : " << person1.getaccNum() << endl;
    cout << "Balance : " << person1.getbalance() << endl;
    cout << "Holder : " << person1.getaccholder() << endl;
    return 0;
}