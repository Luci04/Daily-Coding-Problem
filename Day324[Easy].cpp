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

//Q. Consider the following scenario : there are N mice and N holes placed at
//   integer points along a line.Given this, find a method that maps mice
//   to holes such that the largest number of steps any mouse takes is minimized.

int main()
{
    int a[] = {1, 4, 9, 15};
    int b[] = {10, -5, 0, 16};

    sort(a, a + 4);
    sort(b, b + 4);

    int ans = INT_MIN;

    for (int i = 0; i < 4; i++)
    {
        ans = max(a[i] - b[i], ans);
    }

    cout << ans << "\n";

    return 0;
}