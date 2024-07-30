#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = n / 7; i >= 0; i--)
    {
        if ((n - i * 7) % 4 == 0)
        {
            s = string(i, '7');
            n = n - i * 7;
            for (int i = 1; i <= n / 4; i++)
            {
                s = '4' + s;
            }
            cout << s << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}