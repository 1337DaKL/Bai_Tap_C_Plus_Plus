#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a, a + n, greater<int>());
    int dem = 0, mino = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (mino == 0)
        {
            break;
        }
        dem++;
        mino = min(mino - 1, a[i]);
    }
    cout << dem << endl;
}