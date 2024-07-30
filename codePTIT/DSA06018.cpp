#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        set<int> mp;
        for (auto &it : a)
        {
            cin >> it;
            mp.insert(it);
        }
        cout << (*max_element(a, a + n) - *min_element(a, a + n)) - mp.size() + 1 << endl;
    }
}