#include <bits/stdc++.h>
using namespace std;
int a[1005][1005], b[1005][1005];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
        }
    }
    int test;
    cin >> test;
    while (test--)
    {
        int h1, h2, c1, c2;
        cin >> h1 >> h2 >> c1 >> c2;
        cout << b[h2][c2] - b[h2][c1 - 1] - b[h1 - 1][c2] + b[h1 - 1][c1 - 1] << endl;
    }
}