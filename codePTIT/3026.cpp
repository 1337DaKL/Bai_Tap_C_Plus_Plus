#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int ss = s, nn = n;
    if (s <= 0 || s > n * 9)
        cout << -1 << " " << -1 << endl;

    else
    {
        s -= 1;
        string tmp = "";
        for (int i = 1; i <= n - 1; i++)
        {
            if (s >= 9)
            {
                tmp += "9";
                s -= 9;
            }
            else
            {
                tmp = to_string(s) + tmp;
                s = 0;
            }
        }
        s += 1;
        tmp = to_string(s) + tmp;
        cout << tmp << " ";
        n = nn, s = ss;
        string res = "";
        for (int i = 1; i <= n; i++)
        {
            if (s >= 9)
            {
                res += "9";
                s -= 9;
            }
            else
            {
                res += to_string(s);
                s = 0;
            }
        }
        cout << res;
    }
}
