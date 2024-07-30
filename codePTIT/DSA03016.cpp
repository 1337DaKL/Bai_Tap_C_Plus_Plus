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
        if (d * 9 < s)
            cout << -1 << endl;
        else
        {
            if (d * 9 == s)
            {
                for (int i = 1; i <= d; i++)
                {
                    cout << 9;
                }
                cout << endl;
            }
            else
            {
                s = s - 1;
                string tmp = "";
                for (int i = 1; i <= d - 1; i++)
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
                cout << tmp << endl;
            }
        }
    }
}