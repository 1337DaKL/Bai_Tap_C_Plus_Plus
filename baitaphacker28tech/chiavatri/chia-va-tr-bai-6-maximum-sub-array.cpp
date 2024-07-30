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
    long long maxo = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        maxo = max(maxo, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxo << endl;
}