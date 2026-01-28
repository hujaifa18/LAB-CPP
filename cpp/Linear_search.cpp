#include<bits/stdc++.h>
using namespace std;
int getmax(int A[],int n)
{
    int i, max= INT_MIN;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;

}
void countSort(int A[],int n,int pos)
{
    int output[n];
    vector<int>cnt;
    for(int i=0;i<=10;i++)
    {
        cnt.push_back(0);
    }
    int r = cnt.size();
    for(int i=0;i<n;i++)
    {
        cnt[(A[i]/pos)%10]++;
    }
    for(int i=1;i<=r;i++)
    {
        cnt[i] = cnt[i]+cnt[i-1];
    }
    for(int i = n-1;i>=0;i--)
    {
        output[--cnt[(A[i]/pos)%10]] = A[i];
    }
    for(int i=0;i<n;i++)
    {
        A[i]=output[i];
    }

}
void RadixSort(int A[],int n)
{
    int m =  getmax(A,n);
    for(int pos=1;(m/pos)>0;pos*=10)
    {
        countSort(A,n,pos);
    }
}
int main()
{
    int n=6;
    int A[] = {97,57,208,699,125,734};
    RadixSort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}

