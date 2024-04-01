#include<bits/stdc++.h>
using namespace std;
int b[100005];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = a[i] - a[i - 1];
        }
    }
    for(int i = 0 ; i  < n ; i++)
    {
        cout << b[i] << " ";
    }
}