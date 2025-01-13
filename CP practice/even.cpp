#include<iostream>
using namespace std;
int main()
{
    cout<<"Even = ";
    for(int i=20 ; i<=70 ; i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
        cout<<endl;
        cout<<"Odd = ";
         for(int i=20 ; i<=70 ; i++)
         {
             if(i%2!=0)
             {
                 cout<<i<<" ";
             }
         }

    return 0;
}
