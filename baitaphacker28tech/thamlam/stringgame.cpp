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
    int dem = 0;
    for (auto it : mp)
    {
        if (it.second % 2 == 1)
            dem++;
    }
    if (dem == 1)
        cout << 1 << endl;
    else
    {
        if (dem % 2 == 1)
        {
            cout << 1 << endl;
        }
        else
            cout << 2 << endl;
    }
}