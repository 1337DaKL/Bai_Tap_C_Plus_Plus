#include <bits/stdc++.h>
using namespace std;
int cot[100], xuoi[100], nguoc[100], n, dem = 0;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0)
        {
            cot[j] = 1, xuoi[i - j + n] = 1, nguoc[i + j - 1] = 1;
            if (i == n)
            {
                dem++;
            }
            else
            {
                Try(i + 1);
            }
            cot[j] = 0, xuoi[i - j + n] = 0, nguoc[i + j - 1] = 0;
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
    cout << dem << endl;
}