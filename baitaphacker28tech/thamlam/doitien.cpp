#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    ll a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    cin >> n;
    int dem = 0;
    int i = 9;
    while (n >= 1)
    {
        int x = n / a[i];
        dem += x;
        n = n % a[i];
        i--;
    }
    cout << dem << endl;
}