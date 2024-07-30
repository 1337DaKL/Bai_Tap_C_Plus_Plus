#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tu, mau;
    cin >> tu >> mau;
    while (true)
    {
        if (mau % tu == 0)
        {
            cout << 1 << "/" << mau / tu;
            break;
        }
        int x = mau / tu + 1;
        cout << 1 << "/" << x << " + ";
        tu = tu * x - mau;
        mau = mau * x;
    }
}