#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;
    return a.first > b.first;
}
int main()
{
    int n;
    cin >> n;
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
        cout << it.first << " " << it.second << endl;
    }
}