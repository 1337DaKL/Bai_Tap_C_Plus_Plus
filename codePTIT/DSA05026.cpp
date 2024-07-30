#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int f[s + 1] = {0};
    f[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= a[i]; j--)
        {
            if (f[j - a[i]] == 1)
            {
                f[j] = 1;
            }
        }
    }
    for (int i = s; i >= 1; i--)
    {
        if (f[i] == 1)
        {
            cout << i << endl;
            return 0;
        }
    }
}