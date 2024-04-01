#include <bits/stdc++.h>
using namespace std;
bool ok(string s)
{
    for (auto &it : s)
    {
        it = tolower(it);
    }
    set<char> mp;
    for (auto it : s)
    {
        mp.insert(it);
    }
    if (mp.size() == 26)
        return true;
    return false;
}
int main()
{
    string s;
    cin >> s;
    if (ok(s))
        cout << "YES";
    else
        cout << "NO";
}