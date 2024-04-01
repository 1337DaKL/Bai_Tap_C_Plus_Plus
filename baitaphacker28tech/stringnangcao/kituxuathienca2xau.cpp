#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> mp;
    set<char> ok;
    set<char> ok1;
    string a, b;
    cin >> a >> b;
    for (auto it : a)
    {
        mp.insert(it);
        ok.insert(it);
    }
    for (auto it : b)
    {
        mp.insert(it);
    }
    for (auto it : b)
    {
        if (ok.find(it) != ok.end())
            ok1.insert(it);
    }
    for (auto it : ok1)
        cout << it;
    cout << endl;
    for (auto it : mp)
    {
        cout << it;
    }
}