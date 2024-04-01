#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i == n - 1 || j == 0)
            {
                cout << '*';
            }
            else if (j < i)
                cout << i + 1;
        }
        cout << endl;
    }
}