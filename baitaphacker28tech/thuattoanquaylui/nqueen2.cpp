#include <bits/stdc++.h>
using namespace std;
int a[100][100], cot[100], xuoi[100], nguoc[100], tong = 0, maxo = INT_MIN;
void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (cot[j] == 0 && xuoi[i - j + 8] == 0 && nguoc[i + j - 1] == 0)
        {
            tong += a[i][j];
            cot[j] = 1, xuoi[i - j + 8] = 1, nguoc[i + j - 1] = 1;
            if (i == 8)
            {
                maxo = max(maxo, tong);
            }
            else
            {
                Try(i + 1);
            }
            tong -= a[i][j];
            cot[j] = 0, xuoi[i - j + 8] = 0, nguoc[i + j - 1] = 0;
        }
    }
}
int main()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << maxo << endl;
}