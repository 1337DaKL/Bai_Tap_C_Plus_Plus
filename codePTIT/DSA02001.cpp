#include <bits/stdc++.h>
using namespace std;
int n, a[1000];
void Try(int i)
{
    cout << "[";
    for (int j = 1; j < i; j++)
    {
        cout << a[j] << " ";
    }
    cout << a[i] << "]";
    cout << endl;
    for (int j = 1; j < i; j++)
    {
        a[j] += a[j + 1];
    }
    if (i != 1)
    {
        Try(i - 1);
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        Try(n);
    }
}