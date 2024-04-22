#include <bits/stdc++.h>
using namespace std;
int a[1000], n;
vector<vector<int>> mp;
void Try(int k)
{
    vector<int> ok;
    for (int i = 1; i <= k; i++)
    {
        ok.push_back(a[i]);
    }
    for (int i = 1; i < k; i++)
    {
        a[i] += a[i + 1];
    }
    if (k != 1)
    {
        Try(k - 1);
    }
    mp.push_back(ok);
    ok.clear();
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        Try(n);
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            int dem = 0;
            cout << "[";
            for (auto itt : *it)
            {
                dem++;
                if (dem == (*it).size())
                {
                    cout << itt << "] ";
                }
                else
                {
                    cout << itt << " ";
                }
            }
        }
        mp.clear();
        cout << endl;
    }
}