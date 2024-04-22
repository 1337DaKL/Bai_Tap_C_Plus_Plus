#include <bits/stdc++.h>
using namespace std;
int n, k, s, tong = 0, dem = 0, a[100];
set<vector<int>> mp;
vector<int> v;
int nho[100];
void Try(int pos)
{
    for (int i = pos; i <= n; i++)
    {
        nho[i] = 1;
        tong += a[i];
        v.push_back(a[i]);
        if (tong == s)
        {
            mp.insert(v);
            vector<int> vt;
            for (int j = 1; j <= n; j++)
            {
                if (nho[j] == 0)
                {
                    vt.push_back(a[i]);
                }
            }
            mp.insert(vt);
            return;
        }
        else
        {
            Try(i + 1);
        }
        v.pop_back();
        tong -= a[i];
        nho[i] = 0;
    }
}
int main()
{
    cin >> n >> k;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % k != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        Try(1);
        cout << mp.size() / 2 << endl;
    }
}