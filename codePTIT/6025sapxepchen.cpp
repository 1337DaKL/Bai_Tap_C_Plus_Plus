#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    cout << "Buoc " << 0 << ": " << a[0] << endl;
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1, ok = a[i];
        while (a[pos] > ok & pos >= 0)
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = ok;
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}