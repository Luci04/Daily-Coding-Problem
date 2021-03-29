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

// Given a set of distinct positive integers, find the largest subset such that every pair of elements in the subset (i, j) satisfies either i % j = 0 or j % i = 0.

// For example, given the set [3, 5, 10, 20, 21], you should return [5, 10, 20]. Given [1, 3, 6, 24], return [1, 3, 6, 24].

void solve(vector<int> &v)
{
    int n = v.size();
    if (n == 0)
        return;
    vector<int> res;
    int end = 0;
    int len = 1;

    vector<int> length(n, 1);

    vector<int> peer(n, 0);

    for (int i = 1; i < v.size(); i++)
    {
        peer[i] = i;
        for (int j = 0; j < i; j++)
        {
            if (v[i] % v[j] == 0 && length[j] + 1 > length[i])
            {
                length[i] = length[j] + 1;
                peer[i] = j;
            }
        }

        if (length[i] > len)
        {
            len = length[i];
            end = i;
        }
    }

    res.push_back(v[end]);

    while (end != peer[end])
    {
        end = peer[end];
        res.push_back(v[end]);
    }

    reverse(res.begin(), res.end());

    for (int i = 0; i < res.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";
}

int main()
{
    vector<int> v = {1, 2, 3};
    solve(v);
    return 0;
}