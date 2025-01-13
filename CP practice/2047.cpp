#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v(26);
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 'a'] += 1;
        }
        pair<pair<int, char>, int> low, high;
        low = high = {{v[s[0] - 'a'], s[0]}, 0};
        for (int i = 1; i < n; i++)
        {
            low = min(low, {{v[s[i] - 'a'], s[i]}, i});
            high = max(high, {{v[s[i] - 'a'], s[i]}, i});
        }
        s[low.second] = s[high.second];
        cout << s << "\n";
    }
    return 0;
}
