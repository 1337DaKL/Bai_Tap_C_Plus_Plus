#include <bits/stdc++.h>
using namespace std;
int firstbigx(int a[], int n, int x)
{
    int pos = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            pos = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (pos != -1)
        return pos;
    else
        return -1;
}
int firstbigurx(int a[], int n, int x)
{
    int pos = -1, l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] > x)
        {
            pos = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return pos;
}

int seachx(int a[], int n, int x)
{
    int pos = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            pos = mid;
            r = mid - 1;
        }
        else if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return pos;
}
int seachxend(int a[], int n, int x)
{
    int pos = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            pos = mid;
            l = mid + 1;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return pos;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
        cin >> it;

    sort(a, a + n);
    cout << firstbigx(a, n, m) << endl;
    cout << firstbigurx(a, n, m) << endl;
    cout << seachx(a, n, m) << endl
         << seachxend(a, n, m) << endl;
    int okk = seachxend(a, n, m) - seachx(a, n, m) + 1;
    if (seachxend(a, n, m) != -1)
    {
        cout << okk;
    }
    else
    {
        cout << 0 << endl;
    }
}