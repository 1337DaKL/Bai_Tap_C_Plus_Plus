#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int demchan = 0, demle = 0;
    for (auto &it : a)
    {
        cin >> it;
        if (it % 2 == 0)
        {
            demchan++;
        }
        else
        {
            demle++;
        }
    }
    if (demchan % 2 == 0 && demle % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i - 1]) == 1)
            {
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO";
        return 0;
    }
}