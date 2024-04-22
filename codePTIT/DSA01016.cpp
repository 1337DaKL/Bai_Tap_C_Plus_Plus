#include <bits/stdc++.h>
using namespace std;
int a[100], dem, ok = 1, n;
void khoitao()
{
    a[1] = n;
    dem = 1;
}
void sinh()
{
    int i = dem;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]--;
        int thieu = dem - i + 1;
        int het = thieu / a[i], du = thieu % a[i];
        dem = i;
        for (int j = 1; j <= het; j++)
        {
            dem++;
            a[dem] = a[i];
        }
        if (du != 0)
        {
            dem++;
            a[dem] = du;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        ok = 1;
        vector<vector<int>> mp;
        khoitao();
        while (ok)
        {
            vector<int> mpp;
            for (int i = 1; i <= dem; i++)
            {
                mpp.push_back(a[i]);
            }
            mp.push_back(mpp);
            sinh();
        }
        for (auto it : mp)
        {
            int dem = 0;
            cout << "(";
            for (auto itt : it)
            {
                dem++;
                if (dem != it.size())
                {
                    cout << itt << " ";
                }
                else
                {
                    cout << itt << ") ";
                }
            }
        }
        cout << endl;
    }
}