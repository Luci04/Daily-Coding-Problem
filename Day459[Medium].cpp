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

int getMinSquareSum(int n)
{
    if (n <= 3)
        return n;

    if (sqrt(n) - floor(sqrt(n)) == 0)
        return 1;

    int res = n;

    for (int i = 1; i <= n; i++)
    {
        int temp = i * i;
        if (temp > n)
            break;
        res = 1 + min(res, n - temp);
    }

    return res;
}

int getMinSquareSumDp(int n)
{
    if (n <= 3)
        return n;

    int *dp = new int[n + 1];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = i;
        for (int x = 1; x <= ceil(sqrt(i)); x++)
        {
            int temp = x * x;
            if (temp > i)
                break;
            dp[i] = min(dp[i], 1 + dp[i - temp]);
        }
    }

    int res = dp[n];
    delete[] dp;

    return res;
}

int main()
{
    cout << getMinSquareSumDp(15) << "\n";
    return 0;
}