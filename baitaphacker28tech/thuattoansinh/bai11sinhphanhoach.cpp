#include <bits/stdc++.h>
using namespace std;
int a[10000], n, ok = 1;
int dem;
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
        int cmp = dem - i + 1;
        a[i]--;
        dem = i;
        int so = cmp / a[i], du = cmp % a[i];
        if (so != 0)
        {
            for (int j = 1; j <= so; j++)
            {
                a[i + j] = a[i];
            }
            dem += so;
        }
        if (du != 0)
        {
            a[dem + 1] = du;
            dem++;
        }
    }
}

int main()
{
    int pp = 0;
    vector<vector<int>> mp;
    cin >> n;
    khoitao();
    while (ok)
    {
        pp++;
        vector<int> op;
        for (int i = 1; i <= dem; i++)
        {
            op.push_back(a[i]);
        }
        sinh();
        mp.push_back(op);
        op.clear();
    }
    cout << pp << endl;
    for (auto it : mp)
    {
        int hh = 0;
        for (auto itt : it)
        {
            hh++;
            if (hh == it.size())
            {
                cout << itt;
            }
            else
            {
                cout << itt << "+";
            }
        }
        cout << endl;
    }
}