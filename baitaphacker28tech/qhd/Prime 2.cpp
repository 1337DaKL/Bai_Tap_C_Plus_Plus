#include <bits/stdc++.h>
using namespace std;
int nt[1000005];
void tdl()
{
    for (int i = 0; i <= 1000000; i++)
    {
        nt[i] = 1;
    }
    nt[0] = 0, nt[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
int main()
{
    tdl();
    int dem[1000005];
    dem[0] = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        dem[i] = dem[i - 1] + nt[i];
    }
    int test;
    cin >> test;
    while (test--)
    {
        int l, r;
        cin >> l >> r;
        if (l != 0)
        {
            cout << dem[r] - dem[l - 1] << endl;
        }
        else
            cout << dem[r] << endl;
    }
}