#include <bits/stdc++.h>
using namespace std;
string s;
int n, ok = 1;
void khoitao()
{
    s = "";
    for (int i = 1; i <= n; i++)
    {
        s += "6";
    }
}
void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '8')
    {
        s[i] = '6';
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
    {
        s[i] = '8';
    }
}
int main()
{
    vector<string> mp;
    for (int i = 1; i <= 17; i++)
    {
        ok = 1;
        n = i;
        khoitao();
        while (ok)
        {
            string t = s;
            reverse(t.begin(), t.end());
            mp.push_back(s + t);
            sinh();
        }
    }
    int dem = 0;
    int m;
    cin >> m;
    for (auto it : mp)
    {
        dem++;
        cout << it << " ";
        if (dem == m)
        {
            break;
        }
    }
}