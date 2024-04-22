#include <bits/stdc++.h>
using namespace std;
int a[100], n, k, ok = 1;
vector<string> mp;
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << mp[a[i] - 1] << " ";
            }
            cout << endl;
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    cin >> n >> k;
    set<string> mpp;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        mpp.insert(s);
    }
    n = mpp.size();
    for (auto it : mpp)
    {
        mp.push_back(it);
    }
    Try(1);
}