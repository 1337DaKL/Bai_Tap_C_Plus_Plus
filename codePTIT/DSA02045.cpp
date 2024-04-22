#include <bits/stdc++.h>
using namespace std;
int n;
vector<char> mp;
void khoitao()
{
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        mp.push_back(s[i]);
    }
    sort(mp.begin(), mp.end());
}
string ss;
vector<string> ok;
void Try(int pos)
{
    for (int i = pos; i < n; i++)
    {
        ss.push_back(mp[i]);
        ok.push_back(ss);
        Try(i + 1);
        ss.pop_back();
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ok.clear();
        ss = "";
        mp.clear();
        khoitao();
        Try(0);
        sort(ok.begin(), ok.end());
        for (auto it : ok)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}