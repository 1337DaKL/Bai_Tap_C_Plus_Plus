#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    long long tong = 0;
    int nho = 0;
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
        if (it.first > tong)
        {
            tong = it.first + it.second;
        }
        else
        {
            tong += it.second;
        }
    }
    cout << tong;
}