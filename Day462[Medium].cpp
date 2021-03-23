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

bool isSparse(int n)
{
    if (n & (n >> 1))
        return false;

    return true;
}

void solve(int x)
{
    x = x + 1;
    while (1)
    {
        if (isSparse(x))
        {
            cout << x << "\n";
            break;
        }
        else
        {
            x++;
        }
    }
}

void solveOptimised(int x)
{
    vector<int> bit;

    while (x != 0)
    {
        bit.push_back(x & 1);
        x >>= 1;
    }

    bit.push_back(0);
    int last = 0;
    int n = bit.size();

    for (int i = 1; i < n - 1; i++)
    {
        if (bit[i - 1] == 1 && bit[i] == 1 && bit[i + 1] != 1)
        {
            bit[i + 1] = 1;
            for (int j = i; j >= last; j--)
            {
                bit[j] = 0;
            }
            last = i + 1;
        }
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += bit[i] * (1 << i);
    }

    cout << ans << "\n";
}

int main()
{
    solveOptimised(6);
    return 0;
}