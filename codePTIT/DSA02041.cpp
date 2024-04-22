#include <bits/stdc++.h>
using namespace std;
int n, mino = INT_MAX;
int dem = 0;
void Try(int n)
{
    if (n == 1)
    {
        mino = min(mino, dem);
        return;
    }
    if (n % 2 == 0)
    {
        dem++;
        Try(n / 2);
        dem--;
    }
    if (n % 3 == 0)
    {
        dem++;
        Try(n / 3);
        dem--;
    }
    if (n > 1)
    {
        dem++;
        Try(n - 1);
        dem--;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        dem = 0;
        mino = INT_MAX;
        Try(n);
        cout << mino << endl;
    }
}