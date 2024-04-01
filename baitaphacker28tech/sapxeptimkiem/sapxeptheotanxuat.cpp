#include <bits/stdc++.h>
using namespace std;
bool ok1(pair<int, int> a, pair<int, int> b)
{
    if (b.second == a.second)
    {
        return a.first < b.first;
    }
    return b.second < a.second;
}
bool ok2(pair<int, int> a, pair<int, int> b)
{
    return b.second < a.second;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (auto &it : a)
    {
        cin >> it;
        mp[it]++;
    }
    vector<pair<int, int>> ok;
    for (auto it : mp)
    {
        ok.push_back({it.first, it.second});
    }
    sort(ok.begin(), ok.end(), ok1);
    for (auto it : ok)
    {
        int m = it.second;
        while (m--)
        {
            cout << it.first << " ";
        }
    }
    cout << endl;
    vector<pair<int, int>> oki;
    for (auto it : a)
    {
        if (mp[it] != 0)
        {
            oki.push_back({it, mp[it]});
            mp[it] = 0;
        }
    }
    stable_sort(oki.begin(), oki.end(), ok2);
    for (auto it : oki)
    {
        int m = it.second;
        while (m--)
        {
            cout << it.first << " ";
        }
    }
}