#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &it : a)
        {
            cin >> it;
        }
        int dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int mino = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[mino] > a[j])
                {
                    mino = j;
                }
            }
            if (mino != i)
            {
                dem++;
            }
            swap(a[mino], a[i]);
        }
        cout << dem << endl;
    }
}