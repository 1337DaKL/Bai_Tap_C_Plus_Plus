#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        multiset<ll> mp;
        for (auto &it : a)
        {
            cin >> it;
            if (it != 0)
            {
                mp.insert(it);
            }
        }
        ll ok1 = 0, ok2 = 0;
        int j = 0;
        for (auto it : mp)
        {
            j++;
            if (j % 2 == 1)
            {
                ok1 = ok1 * 10 + it;
            }
            else
            {
                ok2 = ok2 * 10 + it;
            }
        }
        cout << ok1 + ok2 << endl;
    }
}