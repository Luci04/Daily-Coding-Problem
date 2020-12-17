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

// Q.Given a positive integer N, find the smallest number of steps it will take to reach 1.

// There are two kinds of permitted steps:

// You may decrement N to N - 1.
// If a * b = N, you may decrement N to the larger of a and b.
// For example, given 100, you can reach 1 in five steps with the following route: 100 -> 10 -> 9 -> 3 -> 2 -> 1.

struct data
{
    int val;
    int steps;
    data(int val, int steps) : val(val), steps(steps)
    {
    }
};

int solve(int n)
{
    queue<data> q;

    q.push(data(n, 0));

    set<int> st;

    while (!q.empty())
    {
        data t = q.front();
        q.pop();

        if (t.val == 1)
        {
            return t.steps;
        }

        if (st.find(t.val - 1) == st.end())
        {
            q.push(data(t.val - 1, t.steps + 1));
            st.insert(t.val - 1);
        }

        for (int i = 2; i * i <= t.val; i++)
        {
            if (t.val % i == 0 && st.find(t.val / i) == st.end())
            {
                q.push(data(t.val / i, t.steps + 1));
                st.insert(t.val / i);
            }
        }
    }
    return -1;
}

int main()
{
    int n = 17;
    cout << solve(n) << "\n";
    return 0;
}