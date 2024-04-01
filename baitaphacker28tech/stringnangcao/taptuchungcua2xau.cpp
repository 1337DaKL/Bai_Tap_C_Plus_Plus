#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    set<string> mp;
    set<string> ok;
    stringstream ss(a);
    string m;
    while (ss >> m)
    {
        for (auto &it : m)
            it = tolower(it);
        mp.insert(m);
    }
    stringstream sss(b);
    string n;
    while (sss >> n)
    {
        for (auto &it : n)
        {
            it = tolower(it);
        }
        ok.insert(n);
    }
    for (auto it : ok)
    {
        if (mp.find(it) != mp.end())
            cout << it << " ";
    }
}
