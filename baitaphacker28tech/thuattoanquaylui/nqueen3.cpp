#include <bits/stdc++.h>
using namespace std;
int a[100][100], cot[100], xuoi[100], nguoc[100], n;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0)
        {
            a[i][j] = 1;
            cot[j] = 1, xuoi[i - j + n] = 1, nguoc[i + j - 1] = 1;
            if (i == n)
            {
                for (int g = 1; g <= n; g++)
                {
                    for (int h = 1; h <= n; h++)
                    {
                        if (a[g][h] == 1)
                        {
                            cout << "Q";
                        }
                        else
                        {
                            cout << ".";
                        }
                    }
                    cout << endl;
                }
                cout << endl;
            }
            else
            {
                Try(i + 1);
            }
            a[i][j] = 0;
            cot[j] = 0, xuoi[i - j + n] = 0, nguoc[i + j - 1] = 0;
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
}