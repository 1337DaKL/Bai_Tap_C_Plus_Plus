#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000];
void khoitao()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}
vector<vector<int>> mp;
vector<int> v;
void Try(int pos)
{
    for (int i = pos; i <= n; i++)
    {
        v.push_back(a[i]);
        if (v.size() == m)
        {
            mp.push_back(v);
        }
        else
        {
            Try(i + 1);
        }
        v.pop_back();
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        v.clear();
        mp.clear();
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
