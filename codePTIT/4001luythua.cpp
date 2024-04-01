#include <bits/stdc++.h>
using namespace std;
int ok = 10e9 + 7;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, k;
        cin >> n >> k;
        long long tong = 1;
        for (long long i = 0; i < k; i++)
        {
            tong = (tong % ok * n % ok) % ok;
        }
        cout << tong << endl;
    }
}