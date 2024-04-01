#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    int dem = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1] && a[i] > i)
        {
            for (int i = i; i < n; i++)
            {
                swap(a[i], a[i - 1]);
            }
            dem++;
        }
        else if (a[i] < a[i - 1] && a[i] < i)
        {
            for (int i = i; i >= 0; i--)
            {
                swap(a[i], a[i - 1]);
                dem++;
            }
        }
    }
    cout << dem << endl;
}