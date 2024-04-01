#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll b[100005];
int main()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = a[i] + b[i - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}