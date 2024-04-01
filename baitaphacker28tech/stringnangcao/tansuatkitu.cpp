#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mp;
    string s;
    cin >> s;
    for (auto it : s)
    {
        mp[it]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (auto it : s)
    {
        if (mp[it] != 0)
        {
            cout << it << " " << mp[it] << endl;
            mp[it] = 0;
        }
    }
}