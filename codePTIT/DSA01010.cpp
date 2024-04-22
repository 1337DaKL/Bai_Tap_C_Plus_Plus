#include <bits/stdc++.h>
using namespace std;
int a[100], n, k, ok = 1;
void Sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int o, oo;
        cin >> o >> oo;
        n = o, k = oo;
        set<int> mp;
        for (int i = 1; i <= k; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
            mp.insert(x);
        }
        Sinh();
        if (ok == 0)
        {
            cout << k << endl;
        }
        else
        {
            int dem = 0;
            for (int i = 1; i <= k; i++)
            {
                if (mp.find(a[i]) == mp.end())
                {
                    dem++;
                }
            }
            cout << dem << endl;
        }
        mp.clear();
        ok = 1;
    }
}