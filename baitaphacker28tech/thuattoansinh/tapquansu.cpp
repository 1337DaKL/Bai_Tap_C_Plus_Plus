#include <bits/stdc++.h>
using namespace std;
int n, k, ok = 1, a[1000];
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
    map<int, int> mp;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sinh();
    if (ok)
    {
        int dem = 0;
        for (int i = 1; i <= k; i++)
        {
            if (mp[a[i]] == 1)
            {
                dem++;
            }
        }
        cout << k - dem;
    }
    else
    {
        cout << k << endl;
    }
}