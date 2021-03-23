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

// On a mysterious island there are creatures known as Quxes which come in three colors: red, green, and blue. One power of the Qux is that if two of them are standing next to each other, they can transform into a single creature of the third color.

// Given N Quxes standing in a line, determine the smallest number of them remaining after any possible sequence of such transformations.

// For example, given the input ['R', 'G', 'B', 'G', 'B'], it is possible to end up with a single Qux through the following steps:

//         Arrangement       |   Change
// ----------------------------------------
// ['R', 'G', 'B', 'G', 'B'] | (R, G) -> B
// ['B', 'B', 'G', 'B']      | (B, G) -> R
// ['B', 'R', 'B']           | (R, B) -> G
// ['B', 'G']                | (B, G) -> R
// ['R']                     |

void solve(vector<char> &v)
{
    int countR = 0;
    int countG = 0;
    int countB = 0;

    for (char c : v)
    {
        if (c == 'R')
            countR++;
        if (c == 'G')
            countG++;
        if (c == 'B')
            countB++;
    }

    if (countR == v.size() || countG == v.size() || countB == v.size())
    {
        cout << v.size() << "\n";
    }
    else if (countR % 2 == 0 && countG % 2 == 0 && countB % 2 == 0)
    {
        cout << "2\n";
    }
    else
    {
        cout << "1\n";
    }
}

int main()
{

    return 0;
}