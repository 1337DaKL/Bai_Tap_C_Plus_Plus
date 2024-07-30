#include <bits/stdc++.h>
using namespace std;
int nt[1000005];
void sang()
{
    for (int i = 0; i < 1000005; i++)
    {
        nt[i] = 1;
    }
    nt[0] = 0, nt[1] = 0;
    for (int i = 2; i < 1000; i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j < 1000005; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
int main()
{
    int test;
    cin >> test;
    sang();
    int dem[1000005];
    dem[0] = 0, dem[1] = 0;
    for (int i = 2; i < 1000000; i++)
    {
        dem[i] = dem[i - 1] + nt[i];
    }
    while (test--)
    {
        int n;
        cin >> n;
        cout << dem[n] << endl;
    }
}