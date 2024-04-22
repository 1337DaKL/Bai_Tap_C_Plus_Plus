#include <bits/stdc++.h>
using namespace std;
int cot[1000], xuoi[1000], nguoc[1000], dem = 0, n;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && xuoi[j - i + n] == 0 && nguoc[j + i - 1] == 0)
        {
            cot[j] = 1, xuoi[j - i + n] = 1, nguoc[j + i - 1] = 1;
            if (i == n)
            {
                dem++;
            }
            else
            {
                Try(i + 1);
            }
            cot[j] = 0, xuoi[j - i + n] = 0, nguoc[j + i - 1] = 0;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        Try(1);
        cout << dem << endl;
        dem = 0;
    }
}