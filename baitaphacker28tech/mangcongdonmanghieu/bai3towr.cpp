#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int b[m];
    for (auto &it : b)
        cin >> it;
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int dem = 0;
    for (auto it : b)
    {
        if (mp[it] != 0)
        {
            dem += mp[it];
        }
    }
    cout << dem;
}