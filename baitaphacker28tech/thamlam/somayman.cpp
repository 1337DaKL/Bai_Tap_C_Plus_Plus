#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";

    if (n % 7 == 0)
    {
        while (n - 7 >= 0)
        {
            s += "7";
            n -= 7;
        }
    }

    else if (n % 4 == 0)
    {
        while (n - 4 >= 0)
        {
            s += '4';
            n -= 4;
        }
    }
    else
    {
        while (n - 7 >= 0)
        {
            s += '7';
            n -= 7;
        }
        while (n - 4 >= 0)
        {
            s += '4';
            n -= 4;
        }
    }
    if (s.size() != 0 && n == 0)
    {
        for (int i = s.size() - 1; i >= 0; i--)
        {
            cout << s[i];
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
