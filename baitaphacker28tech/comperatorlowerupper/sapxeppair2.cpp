#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    int absa = abs(a.first - a.second);
    int absb = abs(b.first - b.second);
    if (absa != absb)
        return absa < absb;
    else
    {
        if (a.first != b.first)
            return a.first < b.first;
        return a.second > b.second;
    }
}
using namespace std;
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