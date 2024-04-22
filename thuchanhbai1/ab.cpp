#include <bits/stdc++.h>
using namespace std;
int a[1000], n, k, ok = 1;
void khoitao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
int main()
{
    cin >> n >> k;
    khoitao();
    set<string> okk;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        okk.insert(s);
    }
    vector<string> mp;
    for (auto it : okk)
    {
        mp.push_back(it);
    }
    n = mp.size();
    while (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << mp[a[i] - 1] << " ";
        }
        cout << endl;
        sinh();
    }
}