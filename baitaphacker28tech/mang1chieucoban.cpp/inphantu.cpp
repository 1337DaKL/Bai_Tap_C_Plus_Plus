#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    bool ok = true;
    for (auto &it : a)
        cin >> it;
    for (auto i = 0; i < n; i++)
    {
        if (i % 2 == 0 && a[i] % 2 == 0)
        {
            cout << a[i] << " ";
            ok = false;
        }
    }
    if (ok)
        cout << "NONE\n";
}