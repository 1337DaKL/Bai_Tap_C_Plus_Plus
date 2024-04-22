#include <bits/stdc++.h>
using namespace std;

int n, a[100], ok = 1;

void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int j = n;
        while (a[j] < a[i])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main()
{
    cin >> n;
    khoitao();
    vector<string> names(n);
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    sort(names.begin(), names.end());
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << names[a[i] - 1] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}
