//C++ Program to Check Whether a character is Vowel or Consonant.
#include <iostream>
using namespace std;
class Vowel
{
private:
    char ch;

public:
    void read(void);
    void check(void);
};
void Vowel ::read(void)
{
    cin >> ch;
}
void Vowel ::check(void)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Vowel\n";
    }
    else
    {
        cout << "Consonant\n";
    }
}
int main()
{
    Vowel v;
    v.read();
    v.check();
    return 0;
}