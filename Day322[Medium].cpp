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

//Q. Starting from 0 on a number line, you would like to make a series of
// jumps that lead to the integer N.
// On the ith jump, you may move exactly i places to the left or right.
// Find a path with the fewest number of jumps required to get from 0 to N.

int solve(int n)
{
    n = abs(n);
    int i = sqrt(2 * n);
    while (true)
    {
        int remain = i * (i + 1) - 2 * n;
        if (remain >= 0 && remain % 4 == 0)
        {
            return i;
        }
        i++;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}