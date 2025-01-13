#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Before Swap: ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swap : " ;
    cout<<a<<" "<<b<<endl;
    return 0;
}
