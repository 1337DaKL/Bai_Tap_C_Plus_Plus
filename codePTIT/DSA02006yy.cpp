#include <bits/stdc++.h>
using namespace std;
int a[1000], n, s, tong = 0, nho[10000];
vector<vector<int>> mp;
vector<int> ok;
void Try(int i)
{
    for (int j = i; j <= n; j++)
    {
        tong += a[j];
        ok.push_back(a[j]);
        if (tong == s)
        {
            mp.push_back(ok);
        }
        else if (tong < s)
        {
            Try(j + 1);
        }
        ok.pop_back();
        tong -= a[j];
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(1);
        if (mp.size() == 0)
        {
            cout << -1;
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
                        cout << itt << "]";
                    }
                    else
                    {
                        cout << itt << " ";
                    }
                }
                cout << " ";
            }
        }
        cout << endl;
        mp.clear();
    }
}