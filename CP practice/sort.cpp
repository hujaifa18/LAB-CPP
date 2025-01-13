#include <bits/stdc++.h>
using namespace std;
void sorted(vector<int> &v,int n)
{
    
    for(int i=0;i<n-1;i++)

    {
        bool flag=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                flag=true;
            }
            
        }
        if(!flag)
            {
                break;
            }
    }
     for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{

    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    sorted(v,n);
    
    return 0;
}