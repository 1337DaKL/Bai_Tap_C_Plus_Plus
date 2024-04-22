#include <bits/stdc++.h>
using namespace std;
int n, sum;
int a[105];
bool stop;

void Try(int i, int s)
{
    if (i == n || stop || s == sum / 2)
    {
        if (s == sum / 2)
            stop = true;
        return;
    }
    if (s + a[i] <= sum / 2)
    {
        Try(i + 1, s + a[i]);
    }
    Try(i + 1, s);
}

void testCase()
{
    cin >> n;
    sum = 0;
    stop = false;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
    {
        Try(0, 0);
    }
    cout << (stop ? "YES" : "NO");
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << "\n";
    }
    return 0;
}