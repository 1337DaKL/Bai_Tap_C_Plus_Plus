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
    int mino = INT_MAX, maxo = INT_MIN;
    for (auto it : mp)
    {
        mino = min(mino, it.second);
        maxo = max(maxo, it.second);
    }
    char ok, okk;
    for (auto it : mp)
    {
        if (it.second == mino)
        {
            ok = it.first;
        }
        if (it.second == maxo)
        {
            okk = it.first;
        }
    }
    cout << okk << " " << maxo << endl;
    cout << ok << " " << mino;
}