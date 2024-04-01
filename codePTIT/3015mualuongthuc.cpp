#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        if (((m * s) + n - 1) / n <= (s - s / 7))
            cout << (m * s + n - 1) / n << endl;
        else
        {
            cout << -1 << endl;
        }
    }
}