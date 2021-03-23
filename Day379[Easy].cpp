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

// Q.Given a string, generate all possible subsequences of the string.

// For example, given the string xyz, return an array or set with the following strings:

// x
// y
// z
// xy
// xz
// yz
// xyz

// Note that zx is not a valid subsequence since it is not in the order of the given string.

void solve(int i, string str, vector<string> &v, string curr)
{
    if (i == str.length())
    {
        v.push_back(curr);
        return;
    }

    solve(i + 1, str, v, curr);

    curr.push_back(str[i]);

    solve(i + 1, str, v, curr);

    curr.pop_back();
}

int main()
{
    vector<string> v;
    string str = "xyz";
    solve(0, str, v, "");

    cout << v.size() << "\n";

    for (auto it : v)
    {
        cout << it << " ";
    }

    cout << "\n";

    return 0;
}