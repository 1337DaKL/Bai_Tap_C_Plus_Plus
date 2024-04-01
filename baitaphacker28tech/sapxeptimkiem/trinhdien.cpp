#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}
int main()
{
    vector<pair<int, int>> mp;
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        mp.push_back({x, y});
    }
    sort(mp.begin(), mp.end(), ok);
    int nho = 0, dem = 0;
    for (auto it : mp)
    {
        if (it.first > nho)
        {
            dem++;
            nho = it.second;
        }
    }
    cout << dem;
}