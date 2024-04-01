#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, string> mp;
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string x, y;
        getline(cin, x);
        getline(cin, y);
        mp.insert({y, x});
    }
    int m;
    cin >> m;
    while (m--)
    {
        string x, y;
        int z;
        cin >> x >> y >> z;
        if (mp.find(x) != mp.end())
        {
            cout << mp[x];
        }
        else
        {
            cout << "Unknown wallet";
        }
        cout << " send " << z << " bitcoin to ";
        if (mp.find(y) != mp.end())
        {
            cout << mp[y] << endl;
        }
        else
        {
            cout << "Unknown wallet" << endl;
        }
    }
}