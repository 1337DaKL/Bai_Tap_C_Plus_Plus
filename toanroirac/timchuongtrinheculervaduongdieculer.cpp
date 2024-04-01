#include <iostream>
#include <set>
#include <stack>
#include <vector>
using namespace std;
int n, m, a[1000][1000];
void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
stack<int> st;
vector<int> ec;
void eculer(int i)
{
    st.push(i);
    while (!st.empty())
    {
        int x = st.top();
        int j;
        for (j = 1; j <= n; j++)
        {
            if (a[x][j] == 1)
                break;
        }
        if (j == n + 1)
        {
            st.pop();
            ec.push_back(x);
        }
        else
        {
            a[x][j] = 0;
            a[j][x] = 0;
            eculer(j);
        }
    }
}
int main()
{
    nhap();
    eculer(m);
    for (auto it = ec.rbegin(); it != ec.rend(); it++)
    {
        cout << *it << " ";
    }
}