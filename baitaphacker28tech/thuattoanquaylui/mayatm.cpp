#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, s, a[100], dem = 0, tong = 0, mino = LLONG_MAX, check = 0;
void Try(int i)
{
    for (int j = i; j <= n; j++)
    {
        tong += a[j];
        dem++;
        if (tong == s)
        {
            check = 1;
            mino = min(mino, dem);
        }
        else if (tong < s)
            Try(j + 1);
        tong -= a[j];
        dem--;
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
    if (check)
    {
        cout << mino << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}