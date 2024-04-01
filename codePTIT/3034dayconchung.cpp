#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        map<int, int> a, b, c;
        while (n--)
        {
            int x;
            cin >> x;
            a[x]++;
        }
        while (m--)
        {
            int x;
            cin >> x;
            b[x]++;
        }
        while (k--)
        {
            int x;
            cin >> x;
            c[x]++;
        }
        bool check = true;
        for (auto it : a)
        {
            int ok = it.first;
            int mino = INT_MAX;
            if (b[ok] != 0 && c[ok] != 0)
            {
                check = false;
                mino = min(it.second, min(b[ok], c[ok]));
                while (mino--)
                {
                    cout << ok << " ";
                }
            }
        }
        if (check)
            cout << "NO\n";
        else
            cout << endl;
    }
}