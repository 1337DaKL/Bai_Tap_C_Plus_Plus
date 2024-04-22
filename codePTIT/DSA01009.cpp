#include <bits/stdc++.h>
using namespace std;
int a[100], n, k, ok = 1;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
    }
}
bool check(int a[], int n)
{
    int cnt = 0;
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            dem++;
        }
        if (a[i] == 1)
        {
            if (dem == k)
            {
                cnt++;
            }
            dem = 0;
        }
    }
    if (dem == k)
        cnt++;
    ;
    if (cnt == 1)
    {
        return true;
    }
    return false;
}
int main()
{
    vector<string> mp;
    cin >> n >> k;
    khoitao();
    while (ok)
    {
        if (check(a, n))
        {
            string s = "";
            for (int i = 1; i <= n; i++)
            {
                s += char('A' + a[i]);
            }
            mp.push_back(s);
        }
        sinh();
    }
    sort(mp.begin(), mp.end());
    cout << mp.size() << endl;
    for (auto it : mp)
    {
        cout << it << endl;
    }
}