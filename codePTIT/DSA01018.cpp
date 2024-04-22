#include <bits/stdc++.h>
using namespace std;
int a[100], n, k, ok;
void khoitao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
bool check(int a[], int b[], int k)
{
    for (int i = 1; i <= k; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ok = 1;
        cin >> n >> k;
        khoitao();
        int b[100000];
        for (int i = 1; i <= k; i++)
        {
            cin >> b[i];
        }
        vector<int> ll;
        if (check(a, b, k))
        {
            for (int i = n - k + 1; i <= n; i++)
            {
                cout << i << ' ';
            }
            cout << endl;
            break;
        }
        while (ok)
        {
            if (check(a, b, k))
            {
                for (auto it : ll)
                {
                    cout << it << " ";
                }
                cout << endl;
                break;
            }
            ll.clear();
            for (int i = 1; i <= k; i++)
            {
                ll.push_back(a[i]);
            }
            sinh();
        }
    }
}