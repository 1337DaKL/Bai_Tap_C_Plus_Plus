#include <bits/stdc++.h>
using namespace std;
int n, k, a[17];

void input(int k)
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = k; i >= 1; i--)
    {
        cout << a[i];
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == k)
        {
            input(k);
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (k = 1; k <= n / 2; k++)
        {
            Try(1);
        }
        cout << endl;
    }
}