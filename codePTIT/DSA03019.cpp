#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll tu, mau;
        cin >> tu >> mau;
        while (true)
        {
            if (mau % tu == 0)
            {
                cout << 1 << "/" << mau / tu;
                break;
            }
            ll x = mau / tu + 1;
            cout << 1 << "/" << x << " + ";
            tu = tu * x - mau;
            mau = mau * x;
        }
        cout << endl;
    }
}