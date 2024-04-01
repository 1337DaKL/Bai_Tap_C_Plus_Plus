#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005];
ll rr = 1000000007;
void fb()
{
    a[1] = 2;
    a[2] = 8;
    for (int i = 3; i <= 1000005; i++)
    {
        a[i] = (2 * a[i - 1] % rr + 8 * a[i - 2] % rr) % rr;
    }
}
int main()
{
    fb();
    int test;
    cin >> test;
    while (test--)
    {
        int x;
        cin >> x;
        cout << a[x] << endl;
    }
}