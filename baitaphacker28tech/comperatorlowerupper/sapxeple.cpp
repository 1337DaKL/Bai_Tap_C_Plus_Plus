#include <bits/stdc++.h>
using namespace std;
int soLe(int n)
{
    int dem = 0;
    while (n)
    {
        int m = n % 10;
        if (m % 2 == 1)
            dem++;
        n /= 10;
    }
    return dem;
}
bool ok(int a, int b)
{
    if (soLe(a) != soLe(b))
        return soLe(a) > soLe(b);
    return a < b;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    sort(a, a + n, ok);
    for (auto it : a)
        cout << it << " ";
}