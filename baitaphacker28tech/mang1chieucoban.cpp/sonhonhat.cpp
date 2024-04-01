#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    cout << (*mp.begin()).second << endl;
}