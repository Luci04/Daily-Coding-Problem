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

// Q.Given a string, return the length of the longest palindromic subsequence in the string.

// For example, given the following string:

// MAPTPTMTPA

// Return 7, since the longest palindromic subsequence in the string is APTMTPA. Recall that a subsequence of a string does not have to be contiguous!

// Your algorithm should run in O(n^2) time and space.

int solve(string str)
{
    int n = str.length();

    int dp[n][n];

    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 1;
    }

    for (int cl = 2; cl <= n; cl++)
    {
        for (int i = 0; i < n - cl + 1; i++)
        {
            int j = i + cl - 1;
            if (str[i] == str[j] && cl == 2)
                dp[i][j] = 2;
            else if (str[i] == str[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
        }
    }

    return dp[0][n - 1];
}

int main()
{
    string str = "MAPTPTMTPA";

    cout << solve(str) << "\n";

    return 0;
}