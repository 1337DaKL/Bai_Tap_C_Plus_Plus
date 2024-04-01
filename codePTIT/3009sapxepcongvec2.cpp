#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> mp;
        while (n--)
        {
            int p, x, y;
            cin >> p >> x >> y;
            mp.push_back({x, y});
        }
        sort(mp.begin(), mp.end(), ok);
        int a[1005] = {0};
        int tong = 0, cnt = 0;
        for (auto it : mp)
        {
            while (a[it.first] == 1 && it.first > 0)
                it.first--;
            if (a[it.first] == 0 && it.first > 0)
            {
                tong += it.second;
                cnt++;
                a[it.first] = 1;
            }
        }
        cout << cnt << " " << tong << endl;
    }
}