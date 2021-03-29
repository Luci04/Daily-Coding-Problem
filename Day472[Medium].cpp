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

// Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.
// For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.

int solve(string str, int i)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    if (str[0] == '0')
        return 0;

    int count = 0;

    if (str[n - 1] > '0')
        count = solve(str, i - 1);

    if (str[i - 2] == '1' || (str[i - 2] == '2' && str[i - 2] < '7'))
        count += solve(str, i - 2);

    return count;
}

int main()
{

    return 0;
}