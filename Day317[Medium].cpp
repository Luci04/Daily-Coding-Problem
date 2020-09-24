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

//Q .Write a function that returns the bitwise AND of all integers between M and N, inclusive.

int solve(int a, int b)
{
    while (a < b)
    {
        b -= (b & -b);
    }

    return b;
}

int main()
{
    int start = 10, end = 15;
    cout << solve(10, 15) << "\n";
    return 0;
}