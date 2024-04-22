#include <bits/stdc++.h>
using namespace std;
string s;
int n, ok = 1;
void khoitao()
{
    s = "";
    for (int i = 1; i <= n; i++)
    {
        s += "0";
    }
}
void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
    {
        s[i] = '1';
    }
}
int main()
{
    int m;
    cin >> m;
    vector<string> mp;
    for (int i = 1; i <= m / 2; i++)
    {
        n = i;
        ok = 1;
        khoitao();
        while (ok)
        {
            ok = 1;
            string t = s;
            for (int j = s.size() - 1; j >= 0; j--)
            {
                t += s[j];
            }
            mp.push_back(t);
            sinh();
        }
    }
    sort(mp.begin(), mp.end());
    for (auto it : mp)
    {
        cout << it << endl;
    }
}