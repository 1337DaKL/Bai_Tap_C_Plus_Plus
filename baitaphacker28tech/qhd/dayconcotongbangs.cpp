#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int b[s + 1] = {0};
    b[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= a[i]; j--)
        {
            if (b[j - a[i]])
            {
                b[j] = 1;
            }
        }
    }
    cout << b[s] << endl;
}