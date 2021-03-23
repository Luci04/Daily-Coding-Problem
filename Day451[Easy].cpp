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

// Q.Implement the function fib(n), which returns the nth number in the Fibonacci sequence,
//  using only O(1) space.

void solve(int n)
{
    if (n <= 1)
    {
        cout << n << "\n";
        return;
    }
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }

    cout << b << "\n";
}

int main()
{
    solve(9);
    return 0;
}