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

//Q. Given a 32-bit positive integer N, determine whether
// it is a power of four in faster than O(log N) time.

float logn(int a, int b)
{
    return log(a) / log(b);
}

bool solve(int n)
{
    if (n == 0)
        return 0;
    return ceil(logn(n, 4)) == floor(logn(n, 4));
}

bool isPower(int n)
{
    if (n <= 3)
        return false;
    else
    {
        while (n != 1)
        {
            if (n % 4 != 0)
                return false;
            n = n / 4;
        }
    }

    return true;
}

int main()
{
    cout << isPower(22);
    return 0;
}
