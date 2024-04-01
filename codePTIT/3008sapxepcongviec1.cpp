#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int dem = 0, fi = INT_MIN;
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        vector<pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp.push_back({a[i], b[i]});
        }
        sort(mp.begin(), mp.end(), ok);
        for (auto it : mp)
        {
            if (it.first >= fi)
            {
                dem++;
                fi = it.second;
            }
        }
        cout << dem << endl;
    }
}