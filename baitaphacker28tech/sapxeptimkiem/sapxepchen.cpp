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
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1;
        ll x = a[i];
        while (pos >= 0 && a[pos] > x)
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
        cout << "Buoc " << i << ": ";
        for (auto it : a)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}