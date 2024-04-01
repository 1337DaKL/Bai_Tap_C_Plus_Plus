#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> &graph, vector<bool> &visited, vector<int> &circuit, int v)
{
    while (!graph[v].empty())
    {
        int u = graph[v].back();
        graph[v].pop_back();
        dfs(graph, visited, circuit, u);
    }
    circuit.push_back(v);
}

int main()
{
    int n;
    cin >> n; // Nhập số đỉnh của đồ thị
    int start;
    cin >> start; // Nhập đỉnh bắt đầu duyệt
    start--;      // Chuyển từ 1-based index thành 0-based index
    vector<vector<int>> graph(n, vector<int>());
    vector<int> degree(n, 0);
    int edgeCount = 0;

    // Nhập ma trận kề
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int isConnected;
            cin >> isConnected;
            if (isConnected == 1)
            {
                graph[i].push_back(j);
                degree[i]++;
                edgeCount++;
            }
        }
    }

    // Kiểm tra tính liên thông của đồ thị
    int connected = 0;
    for (int i = 0; i < n; i++)
    {
        if (degree[i] % 2 != 0)
        {
            cout << "No Euler path or cycle exists." << endl;
            return 0;
        }
        if (degree[i] != 0)
        {
            connected++;
        }
    }
    if (connected == 0)
    {
        cout << "No Euler path or cycle exists." << endl;
        return 0;
    }

    vector<bool> visited(n, false);
    vector<int> circuit;
    dfs(graph, visited, circuit, start);

    // In chu trình hoặc đường đi Euler
    for (int i = circuit.size() - 1; i >= 0; i--)
    {
        cout << circuit[i] + 1 << " "; // Chuyển từ 0-based index thành 1-based index
    }
    cout << endl;

    return 0;
}
