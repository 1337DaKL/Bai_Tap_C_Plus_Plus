#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], tong = 0, n, s;
vector<vector<int>> mp;
vector<int> mpp;
bool ok = true;
void Try(int i)
{
    for (int j = i; j <= n; j++)
    {
        tong += a[j];
        mpp.push_back(a[j]);
        if (tong == s)
        {
            mp.push_back(mpp);
            ok = false;
        }
        else if (tong < s)
        {
            Try(j + 1);
        }
        tong -= a[j];
        mpp.pop_back();
    }
}
int main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    Try(1);
    for (auto it : mp)
    {
        cout << "[";
        int dem = 0;
        for (auto itt : it)
        {
            dem++;
            if (dem < it.size())
            {
                cout << itt << " ";
            }
            else
            {
                cout << itt;
            }
        }
        cout << "]" << endl;
    }
    if (ok)
    {
        cout << -1 << endl;
    }
}