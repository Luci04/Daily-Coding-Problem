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

// Q.Write an algorithm that finds the total number of set bits in all integers between 1 and N.

void solve(int n)
{
    int dp[n + 1];

    dp[0] = 0;

    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            dp[i] = dp[i / 2];
        }
        else
        {
            dp[i] = dp[i - 1] + 1;
        }
    }

    int count = 0;

    for (int i = 0; i <= n; i++)
    {
        count += dp[i];
    }

    cout << count << "\n";
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}