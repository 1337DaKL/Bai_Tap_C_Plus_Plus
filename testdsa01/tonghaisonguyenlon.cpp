#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string a, b;
        cin >> a >> b;
        while (a.size() < b.size())
        {
            a = "0" + a;
        }
        while (b.size() < a.size())
        {
            b = "0" + b;
        }
        int nho = 0;
        string kq = "";
        for (int i = a.size() - 1; i >= 0; i--)
        {
            int aa = a[i] - '0';
            int bb = b[i] - '0';
            int tong = aa + bb + nho;
            nho = tong / 10;
            string iki = to_string(tong % 10);
            kq = iki + kq;
        }
        if (nho != 0)
        {
            kq = to_string(nho) + kq;
        }
        cout << kq << endl;
    }
}