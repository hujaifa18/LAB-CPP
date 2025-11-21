#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v, int n, int target)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (v[mid] < target)
        {
            st = mid + 1;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        else if (v[mid] == target)
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {2, 4, 5, 8, 10, 11};
    int n = v.size();
    int target = 8;
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
    int ans = binarySearch(v, n, target);
    if (ans == -1)
    {
        cout << "Not Found\n";
    }
    else
    {
        cout << "Found " << target << " at index: " << ans << endl;
    }
    return 0;
}