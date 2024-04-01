#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    if (n == 1)
        cout << "YES";
    else
        cout << "NO";
}