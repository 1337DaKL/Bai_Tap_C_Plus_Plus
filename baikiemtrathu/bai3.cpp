#include <bits/stdc++.h>
using namespace std;
int c[20][20], xet[20], n, fotp = INT_MAX, a[20], mino = INT_MAX;
int cost = 0;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            if (i != j && mino > c[i][j])
            {
                mino = c[i][j];
            }
        }
        xet[i] = true;
    }
}
void bre(int i)
{
    for (int j = 2; j <= n; j++)
    {
        if (xet[j])
        {
            a[i] = j;
            cost += c[a[i - 1]][a[i]];
            xet[j] = false;
            if (i == n)
            {
                if (cost + c[1][j] < fotp)
                {
                    fotp = cost + c[1][j];
                }
            }
            else if (cost + (n - i) * mino < fotp)
            {
                bre(i + 1);
            }
            cost -= c[a[i - 1]][a[i]];
            xet[j] = true;
        }
    }
}
int main()
{
    cin >> n;
    khoitao();
    a[1] = 1;
    bre(2);
    cout << fotp << endl;
}