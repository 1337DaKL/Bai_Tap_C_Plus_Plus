#include <bits/stdc++.h>
using namespace std;
int n, a[1000][10000], nho[1000], s, tong = 0;
vector<vector<int>> mp;
vector<int> mpp;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (nho[j] == 0)
        {
            nho[j] = 1;
            tong += a[i][j];
            mpp.push_back(j);
            if (tong == s && i == n)
            {
                mp.push_back(mpp);
            }
            else if (tong < s && i < n)
            {
                Try(i + 1);
            }
            nho[j] = 0;
            tong -= a[i][j];
            mpp.pop_back();
        }
    }
}
int main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << mp.size() << endl;
    for (auto it : mp)
    {
        for (auto itt : it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}