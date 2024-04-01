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
        int gbd = INT_MIN, dem = 0;
        for (auto it : mp)
        {
            if (it.first >= gbd)
            {
                dem++;
                gbd = it.second;
            }
        }
        cout << dem << endl;
    }
}