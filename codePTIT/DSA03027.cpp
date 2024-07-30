#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tong = 0;
    while (n--)
    {
        int x;
        cin >> x;
        tong += abs(x) + x;
    }
    cout << tong << endl;
}