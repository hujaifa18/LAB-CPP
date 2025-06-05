//C++ Program to Generate Multiplication Table
#include<iostream>
using namespace std;
int main()
{
    int n,prod=1,i;
    cin>>n;
    for (int  i = 1; i <= 10; i++)
    {
        prod = n*i;
        cout<<i<<" * "<<n<<" = "<<prod<<endl;
    }
    return 0;
    
}