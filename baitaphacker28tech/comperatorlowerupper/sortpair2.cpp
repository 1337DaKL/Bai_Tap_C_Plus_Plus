#include <bits/stdc++.h>
using namespace std;
bool check(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    else
    {
        if (a.second.first != b.second.first)
            return a.second.first < b.second.first;
        else
        {
            return a.second.second <= b.second.second;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    vector<pair<int, pair<int, int>>> mp;
    while (test--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        mp.push_back({x, {y, z}});
    }
    sort(mp.begin(), mp.end(), check);
    for (auto it : mp)
    {
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }
}