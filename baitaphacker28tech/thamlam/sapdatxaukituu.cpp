#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
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
    int n = s.size();
    if (n % 2 == 0 && maxo <= n - maxo)
    {
        cout << "YES";
    }
    else if (n % 2 == 1 && maxo <= n / 2 + 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}