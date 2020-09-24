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

bool visited[100][100];
char mat[100][100];
int n, m;

bool isSafe(int x, int y)
{
    if (x >= n || y >= m || x < 0 || y < 0 || visited[x][y])
        return false;
    if (mat[x][y] != '.')
        return false;
    return true;
}

void dfs(int x, int y)
{
    visited[x][y] = true;

    if (isSafe(x + 1, y))
        dfs(x + 1, y);
    if (isSafe(x, y + 1))
        dfs(x, y + 1);
    if (isSafe(x - 1, y))
        dfs(x - 1, y);
    if (isSafe(x, y - 1))
        dfs(x, y - 1);
}

int main()
{
    memset(visited, false, sizeof(visited));

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            mat[i][j] = ch;
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && mat[i][j] == '.')
            {
                dfs(i, j);
                count++;
            }
        }
    }

    cout << count << "\n";

    return 0;
}