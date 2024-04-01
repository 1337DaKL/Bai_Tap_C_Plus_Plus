#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        map<char, int> ok;
        for (auto it : s)
        {
            ok[it]++;
        }
        int maxo = 0;
        for (auto it : ok)
        {
            maxo = max(maxo, it.second);
        }
        int n = s.size();
        if (n % 2 == 0 && maxo <= n - maxo)
            cout << 1 << endl;
        else if (n % 2 != 0 && maxo <= n / 2 + 1)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}