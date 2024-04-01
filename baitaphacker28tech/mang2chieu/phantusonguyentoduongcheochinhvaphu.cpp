#include <bits/stdc++.h>
using namespace std;
bool checksonguyento(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {

        if (checksonguyento(a[i][i]))
            dem++;
        if (checksonguyento(a[i][n - i - 1]))
            dem++;
        if (n % 2 == 1 && i == n - i - 1 && checksonguyento(a[i][i]))
            dem--;
    }
    cout << dem << endl;
}