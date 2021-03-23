#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000

const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;

// Q.You are given a 2D matrix of 1s and 0s where 1 represents land and 0 represents water.

// Grid cells are connected horizontally orvertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

// An island is a group is cells connected horizontally or vertically, but not diagonally. There is guaranteed to be exactly one island in this grid, and the island doesn't have water inside that isn't connected to the water around the island. Each cell has a side length of 1.

// Determine the perimeter of this island.

int solveNeighbour(vector<vector<int>> &graph, int i, int j)
{
    int row = graph.size();
    int col = graph[0].size();
    int count = 0;
    //left
    if (j > 0 && graph[i][j - 1])
    {
        count++;
    }
    //right
    if (j < col - 1 && graph[i][j + 1])
    {
        count++;
    }
    //up
    if (i > 0 && graph[i - 1][j])
    {
        count++;
    }
    //down
    if (i < row - 1 && graph[i + 1][j])
    {
        count++;
    }

    return count;
}

int main()
{
    vector<vector<int>> graph = {{0, 1, 1, 0},
                                 {1, 1, 1, 0},
                                 {0, 1, 1, 0},
                                 {0, 0, 1, 0}};
    int ans = 0;
    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 0; j < graph[0].size(); j++)
        {
            if (graph[i][j] == 1)
            {
                ans += (4 - solveNeighbour(graph, i, j));
            }
        }
    }

    cout << ans << "\n";

    return 0;
}