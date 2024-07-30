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
        string s = "";
        bool ok = false;
        for (int i = n / 7; i >= 0; i--)
        {
            if ((n - i * 7) % 4 == 0)
            {
                ok = true;
                s = string(i, '7');
                n = n - (i * 7);
                while (n)
                {
                    s = "4" + s;
                    n -= 4;
                }
                cout << s << endl;
                break;
            }
        }
        if (!ok)
            cout << -1 << endl;
    }
}