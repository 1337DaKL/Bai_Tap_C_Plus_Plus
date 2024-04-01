#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    vector<int> chan;
    vector<int> le;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            le.push_back(a[i]);
        }
        else
            chan.push_back(a[i]);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<int>());
    int o = 0;
    int oo = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << le[o] << " ";
            o++;
        }
        else
        {
            cout << chan[oo] << " ";
            oo++;
        }
    }
}