#include <bits/stdc++.h>
using namespace std;
int n, k, a[100000], ok;
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
    int m;
    cin >> m >> k;
    ok = 1;
    int b[n + 1];
    set<int> mp;
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
        mp.insert(b[i]);
    }
    int dem = 0;
    for (auto it : mp)
    {
        dem++;
        a[dem] = it;
    }
    n = mp.size();
    while (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}