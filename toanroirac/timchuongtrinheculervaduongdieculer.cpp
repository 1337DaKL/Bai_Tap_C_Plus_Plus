#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readInput(const string &filePath, int &t, int &n, vector<vector<int>> &adjMatrix)
{
    ifstream inputFile(filePath);
    if (inputFile.is_open())
    {
        inputFile >> t >> n;
        adjMatrix.resize(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                inputFile >> adjMatrix[i][j];
            }
        }
        inputFile.close();
    }
}

void writeOutput(const string &filePath, const string &output)
{
    ofstream outputFile(filePath);
    if (outputFile.is_open())
    {
        outputFile << output;
        outputFile.close();
    }
}

vector<int> computeDegrees(const vector<vector<int>> &adjMatrix, int n)
{
    vector<int> degrees(n, 0);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            degrees[i] += adjMatrix[i][j];
        }
    }
    return degrees;
}

vector<vector<int>> computeIncidenceMatrix(const vector<vector<int>> &adjMatrix, int n)
{
    vector<pair<int, int>> edges;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (adjMatrix[i][j] == 1)
            {
                edges.emplace_back(i, j);
            }
        }
    }

    int m = edges.size();
    vector<vector<int>> incidenceMatrix(n, vector<int>(m, 0));
    for (int k = 0; k < m; ++k)
    {
        int u = edges[k].first;
        int v = edges[k].second;
        incidenceMatrix[u][k] = 1;
        incidenceMatrix[v][k] = 1;
    }

    return incidenceMatrix;
}

int main()
{
    int t, n;
    vector<vector<int>> adjMatrix;

    readInput("DT.INP", t, n, adjMatrix);

    string output;
    if (t == 1)
    {
        vector<int> degrees = computeDegrees(adjMatrix, n);
        for (int i = 0; i < n; ++i)
        {
            output += to_string(degrees[i]);
            if (i < n - 1)
            {
                output += " ";
            }
        }
        output += "\n";
    }
    else if (t == 2)
    {
        vector<vector<int>> incidenceMatrix = computeIncidenceMatrix(adjMatrix, n);
        int m = incidenceMatrix[0].size();
        output += to_string(n) + " " + to_string(m) + "\n";
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                output += to_string(incidenceMatrix[i][j]);
                if (j < m - 1)
                {
                    output += " ";
                }
            }
            output += "\n";
        }
    }

    writeOutput("DT.OUT", output);

    return 0;
}