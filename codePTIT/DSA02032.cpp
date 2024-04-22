#include <bits/stdc++.h>
using namespace std;
int a[1000], X[1000], n, s;
void khoitao()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}
vector<vector<int>> mp;
int ok;
void Try(int i, int pos, int tong)
{
    for (int j = pos; j <= n; j++)
    {
        X[i] = a[j];
        tong += a[j];
        if (tong == s)
        {
            ok = 1;
            vector<int> mpp;
            for (int k = 1; k <= i; k++)
            {
                mpp.push_back(X[k]);
            }
            mp.push_back(mpp);
            mpp.clear();
        }
        else if (tong < s)
        {
            Try(i + 1, j, tong);
        }
        tong -= a[j];
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        khoitao();
        mp.clear();
        ok = 0;
        Try(1, 1, 0);
        if (ok == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mp.size() << " ";
            for (auto it : mp)
            {
                cout << "{";
                int dem = 0;
                for (auto itt : it)
                {
                    dem++;
                    if (dem != it.size())
                    {
                        cout << itt << " ";
                    }
                    else
                    {
                        cout << itt << "} ";
                    }
                }
            }
            cout << endl;
        }
    }
}