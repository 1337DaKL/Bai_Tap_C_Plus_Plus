#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    int lon = 0, nho = 0;
    int y;
    cin >> y;
    for (auto it : a)
    {
        if (it > y)
            lon++;
        if (it < y)
            nho++;
    }
    cout << nho << endl
         << lon;
}