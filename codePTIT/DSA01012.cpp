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
        int dd = pow(2, n);
        string s[dd + 1];
        s[1] = "0";
        s[2] = "1";
        if (n > 2)
        {
            int mid = 2;
            for (int i = 2; i <= n; i++)
            {
                int u = pow(2, i);
                for (int j = 1; j <= mid; j++)
                {
                    s[u - j + 1] = "1" + s[j];
                    s[j] = "0" + s[j];
                }
                mid = u;
            }
        }
        for (int i = 1; i <= dd; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}