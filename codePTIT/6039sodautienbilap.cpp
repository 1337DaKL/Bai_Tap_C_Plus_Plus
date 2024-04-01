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
        int a[n];
        map<int, int> mp;
        for (auto &it : a)
        {
            cin >> it;
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            if (mp[a[i]] == 2)
            {
                cout << i + 1 << endl;
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "NO\n";
    }
}