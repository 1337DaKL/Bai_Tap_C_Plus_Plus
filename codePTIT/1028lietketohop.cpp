#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000], n, m, k, ok = 1;
void khoitao()
{
    for (int i = 1; i <= n; i++)
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
    cin >> m >> k;
    set<int> mp;
    while (m--)
    {
        int x;
        cin >> x;
        mp.insert(x);
    }
    n = mp.size();
    int ii = 1;
    for (auto it : mp)
    {
        b[ii] = it;
        ii++;
    }
    khoitao();
    while (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << b[a[i]] << " ";
        }
        cout << endl;
        sinh();
    }
}