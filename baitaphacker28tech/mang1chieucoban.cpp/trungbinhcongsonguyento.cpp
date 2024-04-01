#include <bits/stdc++.h>
using namespace std;
bool checknguyento(long long n)
{
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main()
{
    int n;
    cin >> n;
    double dem = 0, tong = 0;
    while (n--)
    {
        double x;
        cin >> x;
        if (checknguyento(x))
        {
            dem++;
            tong += x;
        }
    }
    cout << fixed << setprecision(3) << tong / dem << endl;
}