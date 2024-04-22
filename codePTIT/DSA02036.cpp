#include <bits/stdc++.h>
using namespace std;
int n, a[1000];

set<vector<int>> mp;
void khoitao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}
vector<int> v;
int tong = 0;
void Try(int pos)
{
    for (int i = pos; i <= n; i++)
    {
        tong += a[i];
        v.push_back(a[i]);
        if (tong % 2 == 1)
        {
            vector<int> s(v.rbegin(), v.rend());
            mp.insert(s);
        }
        if (i + 1 <= n)
        {
            Try(i + 1);
        }
        tong -= a[i];
        v.pop_back();
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        mp.clear();
        v.clear();
        tong = 0;
        khoitao();
        Try(1);
        for (auto it : mp)
        {
            for (auto itt : it)
            {
                cout << itt << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}