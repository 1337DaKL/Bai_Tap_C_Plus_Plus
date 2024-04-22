#include <bits/stdc++.h>
using namespace std;
int n, s, a[1000], X[10000], tong = 0, check = false;
vector<vector<int>> mp;
void Try(int i, int pos, int tong)
{
    for (int j = pos; j <= n; j++)
    {
        X[i] = a[j];
        tong += a[j];
        if (tong == s)
        {
            check = true;
            vector<int> ok;
            for (int k = 1; k <= i; k++)
            {
                ok.push_back(X[k]);
            }
            sort(ok.begin(), ok.end());
            mp.push_back(ok);
            ok.clear();
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
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(1, 1, 0);
    if (check)
    {
        sort(mp.begin(), mp.end());
        cout << mp.size() << endl;
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
                    cout << itt << "}\n";
                }
            }
        }
    }
    else
        cout << -1;
}