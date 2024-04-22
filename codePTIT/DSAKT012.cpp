#include <bits/stdc++.h>
using namespace std;
int n, s, ok = 0;
int a[100];
int tong = 0;
int mino = INT_MAX;
int dem = 0;
void Try(int pos)
{
    for (int i = pos; i <= n; i++)
    {
        tong += a[i];
        dem++;
        if (tong == s)
        {
            ok = 1;
            mino = min(mino, dem);
        }
        else if (tong < s)
        {
            Try(i + 1);
        }
        dem--;
        tong -= a[i];
    }
}
int main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(1);
    if (ok)
    {
        cout << mino << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}