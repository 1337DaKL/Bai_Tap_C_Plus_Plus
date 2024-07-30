#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int a[1005][1005] , n;
bool check[1005];
int truocDFS[1005];
int truocBFS[1005];
void DFS(int i)
{
    check[i] = true;
    for(int j = 1 ; j <= n ; j++)
    {
        if(a[i][j] == 1 && check[j] == false)
        {
            truocDFS[j] = i;
            DFS(j);
        }
    }
}
void BFS(int i)
{
    queue<int> wait;
    wait.push(i);
    check[i] = true;
    while(!wait.empty())
    {
        int u = wait.front();
        wait.pop();
        for(int v = 1 ; v <= n ; v++)
        {
            if(a[u][v] == 1 && check[v] == false)
            {
                check[v] = true;
                truocBFS[v] = u;
                wait.push(v);
            }
        }
    }
}
void duongdi(int s , int t)
{
	int ss = s , tt = t;
    memset(check , 0 , sizeof(check));
    DFS(s);
    if(truocDFS[t] == 0)
    {
        cout << "no path" << endl;
    }
    else 
    {
        cout << "DFS path: ";
        while(s != t)
        {
            cout << t << " ";
            t = truocDFS[t];
        }
        cout << s << endl;
    }
    memset(check , 0 , sizeof(check));
    BFS(s);
    s = ss , t = tt;
    if(truocBFS[t] == 0)
    {
       cout << "no path" << endl;
    }
    else
    {
        cout << "BFS path: ";
        while(s != t)
        {
            cout << t << " ";
            t = truocBFS[t];
        }
        cout << s ;
    }
}
int main()
{
    cin >> n;
    int s , t;
    cin >> s >> t;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cin >> a[i][j];
        }
    }
    duongdi(s , t);
}
