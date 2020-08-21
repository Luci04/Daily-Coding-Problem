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

// Q. A knight is placed on a given square on an 8 x 8 chessboard. It is then moved
// randomly several times, where each move is a standard knight move. If the knight
//  jumps off the board at any point, however, it is not allowed to jump back on.
// After k moves, what is the probability that the knight remains on the board?

#define N 8

int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

bool inside(int x, int y)
{
    return (x >= 0 and x < N and y >= 0 and y < N);
}

double solve(int start_x, int start_y, int steps)
{
    double dp1[N][N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dp1[i][j][0] = 1;
        }
    }

    for (int s = 1; s <= steps; s++)
    {
        for (int x = 0; x < N; x++)
        {
            for (int y = 0; y < N; y++)
            {
                double ans = 0.0;

                for (int i = 0; i < N; i++)
                {
                    int nx = x + dx[i], ny = y + dy[i];

                    if (inside(nx, ny))
                    {
                        ans += dp1[nx][ny][s - 1] / 8.0;
                    }
                }
                dp1[x][y][s] = ans;
            }
        }
    }

    return dp1[start_x][start_y][steps];
}

int main()
{
    int k;
    cin >> k;
    cout << solve(0, 0, k) << "\n";
    return 0;
}