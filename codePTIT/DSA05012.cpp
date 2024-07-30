#include <bits/stdc++.h>
using namespace std;
long long a[1005][1005];
long long ok = 1000000000 + 7;
void ki()
{
    for (int i = 0; i < 1005; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] % ok + a[i - 1][j] % ok;
                a[i][j] = a[i][j] % ok;
            }
        }
    }
}
int main()
{
    ki();
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        cout << a[n][k] << endl;
    }
}