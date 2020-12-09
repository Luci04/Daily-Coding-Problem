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

// Q.There exists a staircase with N steps, and you can climb up either 1 or 2 steps at a time. Given N, write a function that returns the number of unique ways you can climb the staircase. The order of the steps matters.

// For example, if N is 4, then there are 5 unique ways:

//     1, 1, 1, 1
//     2, 1, 1
//     1, 2, 1
//     1, 1, 2
//     2, 2

// What if, instead of being able to climb 1 or 2 steps at a time, you could climb any number from a set of positive integers X? For example, if X = {1, 3, 5}, you could climb 1, 3, or 5 steps at a time.

int solve(int n)
{
    if (n <= 1)
        return 1;
    return solve(n - 1) + solve(n - 2);
}

int solve2(int n)
{
    int dp[n + 1] = {0};
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int solve3(int n, int m)
{
    int res[n];
    res[0] = 1;
    res[1] = 1;

    for (int i = 2; i < n; i++)
    {
        res[i] = 0;
        for (int j = 1; j <= m && j <= n; j++)
        {
            res[i] += res[i - j];
        }
    }

    return res[n - 1];
}

int main()
{
    cout << solve(4) << "\n";
    cout << solve2(4) << "\n";
    return 0;
}