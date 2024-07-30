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
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                b[i] = max(b[i], a[i] + b[j]);
            }
        }
    }
    cout << *max_element(b, b + n) << endl;
}