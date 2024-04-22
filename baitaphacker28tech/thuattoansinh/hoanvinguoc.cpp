#include <bits/stdc++.h>
using namespace std;
int n, a[1000], ok = 1;
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
    int m;
    cin >> m;
    int b[10000];
    set<int> iii;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        iii.insert(x);
    }
    int dem = 1;
    for (auto it : iii)
    {
        b[dem] = it;
        dem++;
    }
    n = iii.size();
    vector<vector<int>> mp;
    khoitao();
    while (ok)
    {
        vector<int> ll;
        for (int i = 1; i <= n; i++)
        {
            ll.push_back(b[a[i]]);
        }
        mp.push_back(ll);
        ll.clear();
        sinh();
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        for (auto itt : *it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}