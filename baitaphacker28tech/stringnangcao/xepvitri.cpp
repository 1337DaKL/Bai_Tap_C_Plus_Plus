#include <iostream>
#include <vector>
#include <algorithm>
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
    vector<string> mp(n);
    for (int o = 0; o < n; o++)
    {
        cin >> mp[o];
    }
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << mp[a[i] - 1] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}
