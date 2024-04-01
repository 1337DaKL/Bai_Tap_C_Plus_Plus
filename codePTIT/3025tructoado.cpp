#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m;
        cin >> m;
        vector<pair<int, int>> mp;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            mp.push_back({x, y});
        }
        sort(mp.begin(), mp.end(), ok);
        int noi = INT_MIN, dem = 0;
        for (auto it : mp)
        {
            if (it.first >= noi)
            {
                dem++;
                noi = it.second;
            }
        }
        cout << dem << endl;
    }
}