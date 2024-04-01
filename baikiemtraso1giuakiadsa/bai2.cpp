#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp.insert(x);
    }
    int tongchiphi = 0;
    while (mp.size() > 1)
    {
        if (mp.size() <= m)
        {
            tongchiphi += (*mp.rbegin() - *mp.end());
            long long tong = 0;
            for (auto it : mp)
            {
                tong += it;
            }
            mp.clear();
            mp.insert(tong);
        }
        else
        {
            multiset<int> oki;
            int dem = 0;
            multiset<int> nho;
            for (auto it = mp.begin(); it != mp.end(); it++)
            {
                dem++;
                if (dem <= m)
                {
                    oki.insert(*it);
                }
                else
                {
                    nho.insert(*it);
                }
            }
            tongchiphi += (*oki.rbegin() - *oki.begin());
            mp.clear();
            for (auto it : nho)
            {
                mp.insert(it);
            }
            int tong = 0;
            for (auto it : oki)
            {
                tong += it;
            }
            mp.insert(tong);
        }
    }
    cout << *mp.begin() << endl
         << tongchiphi - 2;
}