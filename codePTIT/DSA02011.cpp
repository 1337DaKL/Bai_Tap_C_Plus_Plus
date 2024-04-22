#include <bits/stdc++.h>
using namespace std;
int n, s, a[100];
void khoitao()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}
int tong, mino, cnt, ok;
void Try(int pos)
{
    for (int i = pos; i <= n; i++)
    {
        tong += a[i];
        cnt++;
        if (tong == s)
        {
            ok = 1;
            mino = min(mino, cnt);
        }
        else if (tong < s)
        {
            Try(i + 1);
        }
        cnt--;
        tong -= a[i];
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        khoitao();
        tong = 0, cnt = 0, mino = INT_MAX, ok = 0;
        Try(1);
        if (ok)
        {
            cout << mino << endl;
        }
        else
            cout << -1 << endl;
    }
}