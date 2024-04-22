#include <bits/stdc++.h>
using namespace std;
int a[100], ok = 1, n;
char b[100];
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    string s;
    cin >> s;
    set<char> mp;
    for (auto it : s)
    {
        mp.insert(it);
    }
    n = mp.size();
    int j = 1;
    for (auto &it : mp)
    {
        b[j] = it;
        j++;
    }
    vector<string> pp;
    khoitao();
    while (ok)
    {
        string ss = "";
        for (int i = 1; i <= n; i++)
        {
            ss += b[a[i]];
        }
        pp.push_back(ss);
        sinh();
    }
    sort(pp.begin(), pp.end());
    for (auto it : pp)
    {
        cout << it << endl;
    }
}
