#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year = ";
    cin>>year;
    if(year%4==0 || year%400==0 && year%100!=0)
    {
        cout<<year<<" Is Leap Year"<<endl;
    }

    else
    {
        cout<<year<<" Is Not Leap Year"<<endl;
    }
    return 0;
}
