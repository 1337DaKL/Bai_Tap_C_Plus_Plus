#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string m;
    while (ss >> m)
    {
        mp[m]++;
    }
    int mino = INT_MAX, maxo = INT_MIN;
    for (auto it : mp)
    {
        mino = min(mino, it.second);
        maxo = max(maxo, it.second);
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        if ((*it).second == maxo)
        {
            cout << (*it).first << " " << (*it).second << endl;
            break;
        }
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        if ((*it).second == mino)
        {
            cout << (*it).first << " " << (*it).second << endl;
            break;
        }
    }
}