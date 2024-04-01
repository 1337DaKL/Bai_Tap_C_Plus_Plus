#include <bits/stdc++.h>
using namespace std;
int a[200005], b[200005], c[200005];
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        a[l] += 1;
        a[r + 1] -= 1;
    }
    for (int i = 1; i <= 200000; i++)
    {
        if (i == 1)
            b[i] = a[i];
        else
            b[i] = b[i - 1] + a[i];
    }
    int dem = 0;
    for (int i = 1; i <= 200000; i++)
    {
        if (b[i] >= k)
            dem++;
        c[i] = dem;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << c[r] - c[l - 1] << endl;
    }
}