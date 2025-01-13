#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z')
        cout<<"Small Latter = "<<ch<<endl;
    else
        cout<<"Capital Latter = "<<ch<<endl;
    if(ch=='a'||ch=='e'||ch=='i'<<'o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'<<'O'||ch=='U')
        cout<<"Vowel = "<<ch<<endl;
    else
        cout<<"Consonant = "<<ch<<endl;
    return 0;
}
