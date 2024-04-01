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
    int u = 1;
    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                ok = true;
            }
        }
        cout << "Buoc " << u << ": ";
        for (auto it : a)
        {
            cout << it << " ";
        }
        cout << endl;
        u++;
    }
}