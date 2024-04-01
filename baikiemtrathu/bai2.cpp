#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    multiset<int> mp;
    for (auto &it : a)
    {
        cin >> it;
        mp.insert(it);
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp.size() != 0)
        {
            for (auto it : mp)
            {
                if (abs(it - a[i]) <= m)
                {
                    auto itt = mp.find(a[i]);
                    mp.erase(itt);
                }
            }
            dem++;
        }
    }
    cout << dem;
}