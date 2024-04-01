#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    int cnt = INT_MIN;
    map<char, int> mp;
    int l = 0;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        while (mp['2'] > x || mp['8'] > y)
        {
            mp[s[l]]--;
            l++;
            if (mp[s[l]] == 0)
                mp.erase(s[l]);
        }
        cnt = max(cnt, i - l + 1);
    }
    cout << cnt;
}