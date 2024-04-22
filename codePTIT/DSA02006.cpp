#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mp;
int a[1000], nho[1000], n, m, tong = 0;
vector<int> ok;
void Try(int k)
{
    for (int i = k; i <= n; i++)
    {
        ok.push_back(a[i]);
        tong += a[i];
        if (tong == m)
        {
            mp.push_back(ok);
        }
        else if (tong < m)
        {
            Try(i + 1);
        }
        ok.pop_back();
        tong -= a[i];
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        tong = 0;
        mp.clear();
        ok.clear();
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        Try(1);
        if (mp.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto it : mp)
            {
                cout << "[";
                int dem = 0;
                for (auto itt : it)
                {
                    dem++;
                    if (dem == it.size())
                    {
                        cout << itt << "] ";
                    }
                    else
                    {
                        cout << itt << " ";
                    }
                }
            }
            cout << endl;
        }
    }
}