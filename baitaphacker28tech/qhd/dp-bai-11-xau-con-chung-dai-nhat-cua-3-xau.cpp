#include <bits/stdc++.h>
using namespace std;
int f[1005][1005][1005];
int main()
{
    string s, t, k;
    cin >> s >> t >> k;
    int a = s.size(), b = t.size(), c = k.size();
    s = " " + s, t = " " + t, k = " " + k;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int p = 1; p <= c; p++)
            {
                if (s[i] == t[j] && t[j] == k[p])
                    f[i][j][p] = f[i - 1][j - 1][p - 1] + 1;
                else
                {
                    f[i][j][p] = max(f[i - 1][j][p], max(f[i][j - 1][p], f[i][j][p - 1]));
                }
            }
        }
    }
    cout << f[a][b][c] << endl;
}