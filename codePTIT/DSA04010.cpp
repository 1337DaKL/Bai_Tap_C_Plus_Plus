#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int maxo = INT_MIN, sum = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = max(sum + a[i], a[i]);
            maxo = max(maxo, sum);
        }
        cout << maxo << endl;
    }
}