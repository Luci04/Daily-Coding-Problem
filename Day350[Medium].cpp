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

// Q.Write a program that determines the smallest number of perfect squares that sum up to N.

// Here are a few examples:

//     Given N = 4, return 1 (4)
//     Given N = 17, return 2 (16 + 1)
//     Given N = 18, return 2 (9 + 9)

int solve(int n)
{
    if (n <= 0)
        return 0;

    vector<int> dp(n + 1, INT_MAX);

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            dp[i] = min(dp[i], 1 + dp[i - j * j]);
        }
    }

    return dp[n];
}

int main()
{
    int n = 8;
    cout << solve(n) << "\n";
    return 0;
}