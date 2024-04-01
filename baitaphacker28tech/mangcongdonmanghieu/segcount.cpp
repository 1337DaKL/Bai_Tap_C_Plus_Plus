#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
        cin >> it;
    int cnt = 0, l = 0;
    multiset<long long> mp;
    for (int r = 0; r < n; r++)
    {
        mp.insert(a[r]);
        while (mp.size() > 0 && *mp.rbegin() - *mp.begin() > m)
        {
            auto it = mp.find(a[l]);
            mp.erase(it);
            l++;
        }
        cnt += r - l + 1;
    }
    cout << cnt;
}