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

// Q.You are in an infinite 2D grid where you can move in any of the 8 directions:

//     (x,y) to
//     (x+1, y),
//     (x - 1, y),
//     (x, y+1),
//     (x, y-1),
//     (x-1, y-1),
//     (x+1,y+1),
//     (x-1,y+1),
//     (x+1,y-1)

// You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

// Example:

// Input: [(0, 0), (1, 1), (1, 2)]
// Output: 2

// It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).

struct point
{
    int x, y;
};

int shortestPath(point a, point b)
{
    int x = abs(a.x - b.x);

    int y = abs(a.y - b.y);

    return max(x, y);
}

int solve(point a[], int n)
{
    int length = 0;

    for (int i = 0; i < n - 1; i++)
    {
        length += shortestPath(a[i], a[i + 1]);
    }

    return length;
}

int main()
{
    point points[] = {{0, 0}, {1, 1}, {1, 2}};

    int n = sizeof(points) / sizeof(point);

    cout << solve(points, n) << "\n";

    return 0;
}