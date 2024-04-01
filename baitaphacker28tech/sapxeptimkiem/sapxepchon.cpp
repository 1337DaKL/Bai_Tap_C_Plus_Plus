#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        ll mino = i;
        for (ll j = i + 1; j < n; j++)
        {
            if (a[mino] > a[j])
            {
                mino = j;
            }
        }
        swap(a[mino], a[i]);
        cout << "Buoc " << i + 1 << ": ";
        for (auto it : a)
            cout << it << " ";
        cout << endl;
    }
}