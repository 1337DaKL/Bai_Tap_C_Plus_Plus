#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i] - 1] == 0)
        {
            dem++;
        }
    }
    cout << dem << endl;
}