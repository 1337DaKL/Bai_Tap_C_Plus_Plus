#include <bits/stdc++.h>
using namespace std;
int ok;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ok = 1;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = n - 2;
        while (i >= 0 && a[i] > a[i + 1])
        {
            i--;
        }
        if (i == 0)
        {
            ok = 0;
        }
        else
        {
            int j = n - 1;
            while (a[i] > a[j])
                j--;
            swap(a[i], a[j]);
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
            for (int i = 0; i < n; i++)
                cout << a[i] << ' ';
            cout << endl;
        }
        if (ok == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
    }
}