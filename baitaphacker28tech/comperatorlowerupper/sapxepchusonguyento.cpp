#include <bits/stdc++.h>
using namespace std;
int demsoNguyenTo(int n)
{
    int dem = 0;
    while (n)
    {
        int m = n % 10;
        if (m == 2 || m == 3 || m == 5 || m == 7)
            dem++;
        n /= 10;
    }
    return dem;
}
bool ok(int a, int b)
{
    return demsoNguyenTo(a) > demsoNguyenTo(b);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    stable_sort(a, a + n, ok);
    for (auto it : a)
        cout << it << " ";
}