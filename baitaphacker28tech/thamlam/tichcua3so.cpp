#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> mp;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            n /= i;
            mp.insert(i);
            if (mp.size() == 2)
            {
                break;
            }
        }
    }
    if (n == 1 || mp.count(n) == 1 || mp.size() <= 1)
    {
        cout << 'NO\n';
    }
    else
        cout << "YES\n";
}