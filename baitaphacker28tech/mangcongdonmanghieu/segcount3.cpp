#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
        cin >> it;
    int tong = 0;
    map<int, int> mp;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        mp[a[r]]++;
        while (mp.size() > m)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
        }
        tong += (r - l + 1);
    }
    cout << tong << endl;
}