#include <bits/stdc++.h>
using namespace std;
char machu[1000];
int ok = 1, n;
int a[100];
void khoitaochu()
{
    for (int i = 1; i <= n; i++)
    {
        machu[i] = char('A' + i - 1);
    }
}
vector<string> mp;
void sinhchu()
{
    int i = n - 1;
    while (i >= 1 && machu[i] > machu[i + 1])
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
        while (machu[i] > machu[j])
        {
            j--;
        }
        swap(machu[i], machu[j]);
        reverse(machu + i + 1, machu + n + 1);
    }
}
vector<string> mpp;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == n)
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
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = 1;
        }
    }
}
int main()
{
    cin >> n;
    khoitaochu();
    while (ok)
    {
        string s = "";
        for (int i = 1; i <= n; i++)
        {
            s += machu[i];
        }
        mp.push_back(s);
        sinhchu();
    }
    ok = 1;
    khoitao();
    while (ok)
    {
        string s = "";
        for (int i = 1; i <= n; i++)
        {
            s += to_string(a[i]);
        }
        mpp.push_back(s);
        sinh();
    }
    for (auto it : mp)
    {
        for (auto itt : mpp)
        {
            cout << it << itt << endl;
        }
    }
}