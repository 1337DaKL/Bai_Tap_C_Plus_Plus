#include <bits/stdc++.h>
using namespace std;
int a[1000], nho[1000], n;
string s;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (nho[j] == 0)
        {
            nho[j] = 1;
            a[i] = j;
            if (i == n)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << s[a[j] - 1];
                }
                cout << " ";
            }
            else
                Try(i + 1);
            nho[j] = 0;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> s;
        n = s.size();
        Try(1);
        cout << endl;
    }
}
