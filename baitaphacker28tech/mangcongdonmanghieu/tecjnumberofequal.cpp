#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    int aa = 0, bb = 0;
    int tong = 0;
    while (aa < n && bb < m)
    {
        if (a[aa] < b[bb])
        {
            aa++;
            continue;
        }
        else if (a[aa] > b[bb])
        {
            bb++;
            continue;
        }
        int dema = 0, demb = 0;
        while (a[aa] == b[bb])
        {
            dema++;
            aa++;
        }
        aa--;
        while (a[aa] == b[bb])
        {
            demb++;
            bb++;
        }
        tong += dema * demb;
    }
    cout << tong << endl;
}