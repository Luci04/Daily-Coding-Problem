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

int solve(int x)
{
    int rightOne;
    int nextHigherOneBit;
    int rightOnesPattern;

    int next = 0;
    if (x)
    {
        int rightOne = x & -(signed)x;
        nextHigherOneBit = x + rightOne;
        rightOnesPattern = x ^ nextHigherOneBit;
        rightOnesPattern /= rightOne;
        rightOnesPattern >>= 2;

        next = nextHigherOneBit | rightOnesPattern;
    }
    return next;
}

int main()
{
    int x = 10;
    cout << solve(x) << "\n";
    return 0;
}