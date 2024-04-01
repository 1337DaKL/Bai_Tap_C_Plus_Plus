#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> mp;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        mp.push_back({x, y});
    }
    sort(mp.begin(), mp.end(), ok);
    for (auto it : mp)
    {
        if (it.first >= m)
        {
            cout << "NO\n";
            return 0;
        }
        else
        {
            m += it.second;
        }
    }
    cout << "YES\n";
}