#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<string> mp;
    map<string, int> ok;
    stringstream ss(s);
    string m;
    while (ss >> m)
    {
        mp.push_back(m);
        ok[m]++;
    }
    for (auto it : ok)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (auto it : mp)
    {
        if (ok[it] != 0)
        {
            cout << it << " " << ok[it] << endl;
            ok[it] = 0;
        }
    }
}