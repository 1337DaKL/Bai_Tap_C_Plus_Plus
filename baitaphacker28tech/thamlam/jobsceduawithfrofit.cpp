#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int main()
{
    vector<pair<int, int>> mp;
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        mp.push_back({b, c});
    }
    sort(mp.begin(), mp.end(), ok);
    int nho[100005];
    ll tong = 0;
    for (auto it : mp)
    {
        while (nho[it.first] == 1 && it.first > 0)
        {
            it.first--;
        }
        if (nho[it.first] == 0 && it.first > 0)
        {
            tong += it.second;
            nho[it.first] = 1;
        }
    }
    cout << tong << endl;
}