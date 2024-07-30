#include <bits/stdc++.h>
using namespace std;
int a[55][55];
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string m;
        while (ss >> m)
        {
            int x = stoi(m);
            if (a[i][x] == 0)
            {
                cout << i << " " << x << endl;
                a[i][x] = 1, a[x][i] = 1;
            }
        }
    }
}