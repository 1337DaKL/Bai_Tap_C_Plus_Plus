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
        int dem = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
}