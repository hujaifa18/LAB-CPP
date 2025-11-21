#include <bits/stdc++.h>
using namespace std;
int bubbleSort(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> v = {3, 2, 4, 5, 1, 6, 4};
    int n = v.size();
    // Jodi User input niye kaj korte bole
    // int n;
    // cin>>n;
    // vector<int>v(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }
    bubbleSort(v, n);
    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;
    return 0;
}