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

// Q.You are writing an AI for a 2D map game. You are somewhere in a 2D grid, and there are coins strewn about over the map.

// Given the position of all the coins and your current position, find the closest coin to you in terms of Manhattan distance. That is, you can move around up, down, left, and right, but not diagonally. If there are multiple possible closest coins, return any of them.

// For example, given the following map, where you are x, coins are o, and empty spaces are . (top left is 0, 0):

// ---------------------
// | . | . | x | . | o |
// ---------------------
// | o | . | . | . | . |
// ---------------------
// | o | . | . | . | o |
// ---------------------
// | . | . | o | . | . |
// ---------------------

// return (0, 4), since that coin is closest. This map would be represented in our question as:

// Our position: (0, 2)
// Coins: [(0, 4), (1, 0), (2, 0), (3, 2)]

int main()
{
    int ans = INT_MAX;
    pair<int, int> Pos = {0, 2};

    vector<pair<int, int>> points = {{0, 4},
                                     {1, 0},
                                     {2, 0},
                                     {3, 2}};

    for (auto it : points)
    {
        int x = abs(Pos.first - it.first);
        int y = abs(Pos.second - it.second);
        ans = min(ans, x + y);
    }

    cout << ans << " ";

    return 0;
}