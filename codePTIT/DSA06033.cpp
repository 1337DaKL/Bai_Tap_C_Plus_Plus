#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        bool check = true;
        int maxo = INT_MIN;
        for (int i = n; i >= 0; i--)
        {
            for (int j = 1; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    cout << i - j << endl;
                    check = false;
                    break;
                }
            }
            if (check == false)
            {
                break;
            }
        }
        if (check)
        {
            cout << -1 << endl;
        }
    }
}