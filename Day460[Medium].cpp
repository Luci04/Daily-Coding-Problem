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

int solve(string str)
{
    int n = str.length();
    int left[n], right[n];
    left[0] = 0;
    right[n - 1] = 0;

    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] + (str[i - 1] == 'y' ? 1 : 0);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] + (str[i + 1] == 'x' ? 1 : 0);
    }
    int ans = n;

    for (int i = 0; i < n; i++)
    {
        ans = min(ans, left[i] + right[i]);
    }

    return ans;
}

int main()
{
    string str = "xyxxxyxyy";
    cout << solve(str);
    return 0;
}