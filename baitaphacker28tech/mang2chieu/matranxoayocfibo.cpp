#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fb[100];
void fibnaxi()
{
    fb[0] = 0, fb[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
}
int main()
{
    fibnaxi();
    int n;
    cin >> n;
    ll a[n][n];
    int c1 = 0, h1 = 0, c2 = n - 1, h2 = n - 1;
    int ok = 0;
    while (c1 <= c2 && h1 <= h2)
    {
        for (int i = c1; i <= c2; i++)
        {
            a[h1][i] = fb[ok];
            ok++;
        }
        h1++;
        for (int i = h1; i <= h2; i++)
        {
            a[i][c2] = fb[ok];
            ok++;
        }
        c2--;
        if (h1 <= h2)
        {
            for (int i = c2; i >= c1; i--)
            {
                a[h2][i] = fb[ok];
                ok++;
            }
            h2--;
        }
        if (c1 <= c2)
        {
            for (int i = h2; i >= h1; i--)
            {
                a[i][c1] = fb[ok];
                ok++;
            }
            c1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}