#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tar, tar2, tar3;
    cin >> tar >> tar2 >> tar3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] = tar)
        {
            flag = true;
            break;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar2)
            count++;
    }
    cout << boolalpha << flag << endl;
    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar3)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}