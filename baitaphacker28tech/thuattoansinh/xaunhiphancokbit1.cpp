#include <bits/stdc++.h>
using namespace std;
int n, k, a[1000], ok = 1;
void khoi()
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
bool check1(int a[])
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            dem++;
        }
    }
    if (dem == k)
    {
        return true;
    }
    return false;
}
bool check2(int a[])
{
    int tong = 0;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            tong += 1;
        }
        else
        {
            mp[tong]++;
            tong = 0;
        }
    }
    mp[tong]++;
    for (auto it : mp)
    {
        if (it.first > k)
        {
            return false;
        }
    }
    if (mp[k] == 1)
    {
        return true;
    }
    return false;
}
int main()
{
    cin >> n >> k;
    khoi();
    while (ok)
    {
        if (check1(a))
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << " ";
        }
        sinh();
    }
    cout << endl;
    khoi();
    ok = 1;
    while (ok)
    {
        if (check2(a))
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << " ";
        }
        sinh();
    }
}