#include <bits/stdc++.h>
using namespace std;
struct canh
{
    int a, b, c;
};
int main()
{
    int n;
    cin >> n;
    vector<canh> ve;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 0 && i < j)
            {
                canh ca;
                ca.a = i, ca.b = j, ca.c = a[i][j];
                ve.push_back(ca);
            }
        }
    }
    for (auto it : ve)
    {
        cout << it.a << " " << it.b << " " << it.c << endl;
    }
}