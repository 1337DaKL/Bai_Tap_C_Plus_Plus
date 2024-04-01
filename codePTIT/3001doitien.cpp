#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int ok[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (int i = 0; i < 10; i++)
        {
            while (n - ok[i] >= 0)
            {
                n -= ok[i];
                mp[ok[i]]++;
            }
        }
        int tong = 0;
        for (auto it : mp)
        {
            tong += it.second;
        }
        cout << tong << endl;
    }
}