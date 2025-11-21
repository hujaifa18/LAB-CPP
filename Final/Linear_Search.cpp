#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> v, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {2, 1, 3, 4, 5, 6, 7};
    int n = v.size();
    int target = 5;
    // Jodi User input niye kaj korte bole
    // int n;
    // cin>>n;
    // vector<int>v(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }
    // int target;
    // cin>>target;
    int ans = linearSearch(v, n, target);
    if (ans == -1)
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Found " << target << " at index : " << ans << endl;
    }
    return 0;
}