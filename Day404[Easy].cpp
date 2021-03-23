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

// Q.Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), find the minimum number of rooms required.

// For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.

bool fun(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.first == p2.first)
        return p1.second < p2.second;
    return p1.first < p2.second;
}

int main()
{
    vector<pair<int, int>> v = {{30, 75},
                                {0, 50},
                                {60, 150}};

    int count = 1;

    sort(v.begin(), v.end(), fun);

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first < v[i - 1].second)
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}