#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}
bool ok(string a, string b)
{
    return a.size() < b.size();
}
int main()
{
    vector<string> mp;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string m;
    map<string, int> mpp;
    while (ss >> m)
    {
        if (check(m) && mpp[m] == 0)
            mp.push_back(m);
        mpp[m]++;
    }
    stable_sort(mp.begin(), mp.end(), ok);
    for (auto it : mp)
        cout << it << " ";
}