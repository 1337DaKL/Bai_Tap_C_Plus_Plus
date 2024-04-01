#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[55];
void ok()
{
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for (int i = 3; i <= 55; i++)
    {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
}
int main()
{
    ok();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}