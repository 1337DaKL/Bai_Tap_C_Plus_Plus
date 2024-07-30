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
    long long tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong = tong + pow(2, i) * a[i];
    }
    cout << tong << endl;
}