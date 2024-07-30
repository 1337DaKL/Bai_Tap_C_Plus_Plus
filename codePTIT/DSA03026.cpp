#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    if (n * 9 < s)
    {
        cout << -1 << " " << -1 << endl;
    }
    if (s == 0 && n > 1)
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
        for (int i = n - 1; i >= 0; i++)
        {
            cout << tmp[i];
        }
        cout << endl;
    }
}