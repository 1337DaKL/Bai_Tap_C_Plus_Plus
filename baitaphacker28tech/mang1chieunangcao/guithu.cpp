#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    for (int i = 0; i < n; i++)
    {
        int mino = INT_MAX, maxo = INT_MIN;
        if (i == 0)
        {
            mino = a[i + 1] - a[i];
            maxo = a[n - 1] - a[i];
        }
        else if (i == n - 1)
        {
            mino = a[i] - a[i - 1];
            maxo = a[i] - a[0];
        }
        else
        {
            mino = min(mino, min(a[i + 1] - a[i], a[i] - a[i - 1]));
            maxo = max(maxo, max(a[i] - a[0], a[n - 1] - a[i]));
        }
        cout << mino << " " << maxo << endl;
    }
}