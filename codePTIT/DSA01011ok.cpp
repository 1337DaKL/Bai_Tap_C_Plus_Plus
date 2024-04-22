#include <bits/stdc++.h>
using namespace std;
int a[100], n, s;
vector<vector<int>> mp;
void Try(int i, int pos, int tong)
{
    for (int j = pos; j <= n; j++)
    {
        vector<int> ok;
        ok.push_back(a[j]);
        tong += a[j];
        if (tong == s)
        {
            mp.push_back(ok);
        }
        else
        {
            Try(i + 1, pos = i + 1, tong - a[j]);
        }
        ok.clear();
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
    Try(1, 1, 0);
    for (auto it : mp)
    {
        for (auto itt : it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}