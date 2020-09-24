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

// Q. Given a clock time in hh:mm format, determine, to the nearest degree,
//  the angle between the hour and the minute hands.

int solve(double h, double m)
{
    if (h == 12)
        h = 0;
    if (m == 60)
    {
        h++;
        m = 0;
        if (h > 12)
        {
            h = h - 12;
        }
    }

    double hour = 0.5 * (h * 60 + m);
    double minu = 6 * (m);

    double angle = abs(hour - minu);

    return min(angle, 360 - angle);
}

int main()
{
    cout << solve(3, 30) << "\n";
    return 0;
}