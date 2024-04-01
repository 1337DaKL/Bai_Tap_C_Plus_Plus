#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    map<string, int> mp;
    stringstream ss(s);
    string m;
    vector<string> mpp;
    while (ss >> m)
    {
        mp[m]++;
        mpp.push_back(m);
    }
    for (auto it : mp)
    {
        cout << it.first << " ";
    }
    cout << endl;
    for (auto it : mpp)
    {
        if (mp[it] != 0)
        {
            cout << it << " ";
            mp[it] = 0;
        }
    }
}