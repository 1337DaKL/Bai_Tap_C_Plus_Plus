#include <bits/stdc++.h>
using namespace std;
bool ok(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    if (a.first.first + a.first.second == b.first.first + b.first.second)
        return a.second < b.second;
    return a.first.first + a.first.second < b.first.first + b.first.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> mp;
    int cnt = 1;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        mp.push_back({{x, y}, cnt});
        cnt++;
    }
    sort(mp.begin(), mp.end(), ok);
    for (auto it : mp)
    {
        cout << it.second << " ";
    }
}