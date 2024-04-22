#include <bits/stdc++.h>
using namespace std;
int a[1000];
bool check(int a[])
{
    int ngay = 0, thang = 0, nam = 0;
    for (int i = 1; i <= 2; i++)
    {
        ngay = ngay * 10 + a[i];
    }
    for (int i = 3; i <= 4; i++)
    {
        thang = thang * 10 + a[i];
    }
    for (int i = 5; i <= 8; i++)
    {
        nam = nam * 10 + a[i];
    }
    if (ngay < 2 || ngay > 31)
    {
        return false;
    }
    if (thang != 2)
    {
        return false;
    }
    if (nam < 2000)
    {
        return false;
    }
    return true;
}
int b[1000];
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == 8)
        {
            for (int k = 1; k <= 8; k++)
            {
                if (a[k] == 1)
                {
                    b[k] = 2;
                }
                else
                {
                    b[k] = 0;
                }
            }
            if (check(b))
            {
                for (int k = 1; k <= 8; k++)
                {
                    cout << b[k];
                    if (k == 2)
                    {
                        cout << '/';
                    }
                    if (k == 4)
                    {
                        cout << '/';
                    }
                    if (k == 8)
                    {
                        cout << endl;
                    }
                }
            }
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    Try(1);
}