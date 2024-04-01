#include <bits/stdc++.h>
using namespace std;
int uoc(int a, int b)
{
    if (b == 0)
        return a;
    return uoc(b, a % b);
}
int boi(int a, int b)
{
    return a / b * uoc(a, b);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (uoc(a[i], a[j]) == 1)
            {
                dem++;
            }
        }
    }
    cout << dem << endl;
}