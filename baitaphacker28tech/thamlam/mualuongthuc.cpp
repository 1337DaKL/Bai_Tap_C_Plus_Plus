#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, m;
    cin >> n >> s >> m;
    int soluongthuccandetontai = s * m;
    int soluongthuccothemuanhieunhat = n * (s - s / 7);
    if (soluongthuccandetontai > soluongthuccothemuanhieunhat)
    {
        cout << -1;
    }
    else if (soluongthuccandetontai == soluongthuccothemuanhieunhat)
    {
        cout << soluongthuccandetontai / n;
    }
    else
    {
        cout << soluongthuccandetontai / n + 1;
    }
}