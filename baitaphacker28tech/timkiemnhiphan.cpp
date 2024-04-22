#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int n, int k)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == k)
        {
            return true;
        }
        else if (a[mid] > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    if (check(a, n, k))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}