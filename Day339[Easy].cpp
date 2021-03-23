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

//Q.Given an array of numbers and a number k, determine if there are three entries in the array
//which add up to the specified number k. For example, given [20, 303, 3, 4, 25] and k = 49,
//return true as 20 + 4 + 25 = 49.

bool solve(int arr[], int n, int k)
{
    map<int, pair<int, int>> mp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            mp[arr[i] + arr[j]] = {i, j};
        }
    }

    for (int i = 0; i < n; i++)
    {
        auto it = mp.find(k - arr[i]);
        if (it != mp.end() && (*it).second.first != i && (*it).second.second != i)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[] = {20, 303, 3, 4, 25};
    int k = 49;
    cout << solve(arr, (sizeof(arr) / sizeof(arr[0])), k) << "\n";
    return 0;
}
