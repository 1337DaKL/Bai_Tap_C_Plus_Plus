#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void khoitao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
}
vector<int> v;
vector<vector<int>> mp;
int tong = 0;
void Try(int pos)
{
    for (int i = pos; i <= n; i++)
    {
        tong += a[i];
        v.push_back(a[i]);
        if (check(tong))
        {
            mp.push_back(v);
        }
        if (i + 1 <= n)
        {
            Try(i + 1);
        }
        v.pop_back();
        tong -= a[i];
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
        sort(mp.begin(), mp.end());
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