#include <bits/stdc++.h>
using namespace std;
bool ok(int n)
{
    int maxo = INT_MIN, dem = 0;
    int o = n;
    while (n)
    {
        int m = n % 10;
        maxo = max(maxo, m);
        dem++;
        n /= 10;
    }
    int demm = 0, nho = 0;
    while (o)
    {
        demm++;
        if (demm == dem / 2 + 1)
        {
            nho = o % 10;
        }
        o /= 10;
    }
    if (dem % 2 == 1 && nho == maxo)
        return true;
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    bool ck = true;
    for (int i = n; i <= m; i++)
    {
        if (ok(i))
        {
            cout << i << " ";
            ck = false;
        }
    }
    if (ck)
        cout << "28tech";
}