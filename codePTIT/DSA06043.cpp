#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        long long tong = 0;
        int a[n];
        for (auto &it : a)
        {
            cin >> it;
            tong += it;
        }
        int tong2 = 0;
        bool check = true;
        tong -= a[0];
        for (int i = 1; i < n - 1; i++)
        {
            tong2 += a[i - 1];
            tong -= a[i];
            if (tong2 == tong)
            {
                cout << i + 1 << endl;
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << -1 << endl;
        }
    }
}