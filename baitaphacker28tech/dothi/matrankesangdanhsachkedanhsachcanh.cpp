#include <bits/stdc++.h>
using namespace std;
bool ok1(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    vector<pair<int, int>> ve;
    vector<int> mp[n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (i > j && a[i][j] == 1)
            {
                ve.push_back({i, j});
                mp[i].push_back(j);
                mp[j].push_back(i);
            }
        }
    }
    sort(ve.begin(), ve.end(), ok1);
    for (auto it : ve)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        sort(mp[i].begin(), mp[i].end());
        for (auto it : mp[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}