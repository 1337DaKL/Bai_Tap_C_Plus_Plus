#include <bits/stdc++.h>
using namespace std;
int n, ok, a[1000000];
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    ok = 1;
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}