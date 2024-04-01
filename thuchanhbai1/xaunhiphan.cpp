#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<string> res;
void Try(string s, int cnt0, bool check0)
{
    if (s.length() == n + n)
    {
        if (check0)
            res.push_back(s);
        return;
    }
    if (cnt0 + 1 == k && !check0)
    {
        Try(s + '0' + ' ', cnt0 + 1, true);
    }
    else if (cnt0 + 1 < k)
    {
        Try(s + '0' + ' ', cnt0 + 1, check0);
    }
    Try(s + '1' + ' ', 0, check0);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try("", 0, false);
        cout << res.size() << endl;
        for (auto x : res)
            cout << x << endl;
    }
}