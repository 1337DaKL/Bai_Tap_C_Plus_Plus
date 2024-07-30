#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin >> test;
    ;
    while (test--)
    {
        ll n;
        cin >> n;
        set<ll> visited;
        queue<pair<ll, ll>> qu;
        qu.push({n, 0});
        visited.insert(n);
        while (!qu.empty())
        {
            auto it = qu.front();
            qu.pop();
            if (it.first == 1)
            {
                cout << it.second << endl;
                break;
            }
            if (it.first > 0 && visited.count(it.first - 1) == 0)
            {
                visited.insert(it.first - 1);
                qu.push({it.first - 1, it.second + 1});
            }
            for (ll i = 2; i <= sqrt(it.first); i++)
            {
                if (it.first % i == 0)
                {
                    ll maxo = max(i, it.first / i);
                    if (visited.count(maxo) == 0)
                    {
                        qu.push({maxo, it.second + 1});
                        visited.insert(maxo);
                    }
                }
            }
        }
    }
}