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
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }
    cout << n - *max_element(b, b + n) << endl;
}