#include <bits/stdc++.h>
using namespace std;
int a[1000], n, ok = 1;
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
        while (a[j] <= a[i])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    cin >> n;
    khoitao();
    vector<vector<int>> mp;
    while (ok)
    {
        vector<int> ok;
        for (int i = 1; i <= n; i++)
        {
            ok.push_back(a[i]);
        }
        mp.push_back(ok);
        sinh();
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        for (auto itt : *it)
        {
            cout << itt;
        }
        cout << endl;
    }
}