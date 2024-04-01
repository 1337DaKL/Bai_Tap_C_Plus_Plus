#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        int a[m + 1];
        // Initialize the combination
        for (int i = 1; i <= m; i++)
        {
            cin >> a[i];
        }
        int ii = m;
        while (ii >= 1 && a[ii] == n - m + ii)
        {
            ii--;
        }
        if (ii == 0)
        {
            for (int o = 1; o <= m; o++)
            {
                a[o] = o;
            }
        }
        else
        {
            a[ii]++;
            for (int j = ii + 1; j <= m; j++)
            {
                a[j] = a[j - 1] + 1;
            }
        }
        for (int j = 1; j <= m; j++)
        {
            cout << a[j];
            if (j < m)
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
