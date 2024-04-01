#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        string s;
        cin >> n >> s;
        map<char, int> mp;
        for (auto it : s)
        {
            mp[it]++;
        }
        int maxo = INT_MIN;
        for (auto it : mp)
        {
            maxo = max(maxo, it.second);
        }
        if ((n - 1) * (maxo - 1) > s.size() - maxo)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
}