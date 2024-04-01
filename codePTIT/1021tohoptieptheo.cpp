

#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    map<int, int> mp;
    for (int i = 1; i <= k; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;
    if (i == 0)
    {
        cout << k;
        return;
    }

    a[i]++;
    for (int j = i + 1; j <= k; j++)
    {
        a[j] = a[j - 1] + 1;
    }
    int ans = 0;
    for (int i = 1; i <= k; ++i)
    {
        if (mp[a[i]] == 0)
            ans++;
    }
    cout << ans;
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << "\n";
    }
    return 0;
}