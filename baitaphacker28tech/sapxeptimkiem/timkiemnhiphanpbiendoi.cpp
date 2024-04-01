#include <bits/stdc++.h>
using namespace std;
int ok1(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    int nho = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            r = mid - 1;
            nho = mid;
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
    return nho;
}
int ok2(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    int nho = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            l = mid + 1;
            nho = mid;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return nho;
}
int ok3(int a[], int n, int x)
{
    int nho = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            r = mid - 1;
            nho = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return nho;
}
int ok4(int a[], int n, int x)
{
    int nho = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] > x)
        {
            r = mid - 1;
            nho = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return nho;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    cout << ok1(a, n, m) << endl;
    cout << ok2(a, n, m) << endl;
    cout << ok3(a, n, m) << endl;
    cout << ok4(a, n, m) << endl;
    if (ok2(a, n, m) == -1)
    {
        cout << ok2(a, n, m) - ok1(a, n, m) << endl;
    }
    else
    {
        cout << ok2(a, n, m) - ok1(a, n, m) + 1 << endl;
    }
}