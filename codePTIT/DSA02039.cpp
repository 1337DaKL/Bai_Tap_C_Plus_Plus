#include <bits/stdc++.h>
using namespace std;
int n, a[1000], dem = 0, ok = 1;
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
        int vua = thieu / a[i];
        int du = thieu % a[i];
        dem = i;
        for (int j = 1; j <= vua; j++)
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
        ok = 1;
        cin >> n;
        khoitao();
        vector<vector<int>> mp;
        while (ok)
        {
            vector<int> v;
            for (int i = 1; i <= dem; i++)
            {
                v.push_back(a[i]);
            }
            mp.push_back(v);
            sinh();
        }
        cout << mp.size() << endl;
        for (auto it : mp)
        {
            cout << "(";
            int cnt = 0;
            for (auto itt : it)
            {
                cnt++;
                if (cnt != it.size())
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