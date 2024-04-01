#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int s, d;
        cin >> s >> d;
        int ok = 0;
        for (int i = 9; i >= 1; i--)
        {
            if (s / i <= d && (s / i) * i <= s)
            {
                int o = s / i;
                while (o--)
                {
                    ok = ok * 10 + i;
                    s -= i;
                }
            }
        }
        string okk = to_string(ok);
        for (int i = okk.size() - 1; i >= 0; i++)
        {
            cout << okk[i];
        }
        cout << endl;
    }
}