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
    for (int i = n - 1; i >= 1; i--)
    {
        int pos = i - 1, ok = a[i];
        while (pos >= 0 && a[pos] > ok)
        {
            a[pos + 1] = a[pos];
            pos--;
            for (auto it : a)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        a[pos + 1] = ok;
    }
    for (auto it : a)
        cout << it << " ";
}