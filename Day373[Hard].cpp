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

// Q.Given a list of integers L, find the maximum length of a sequence of consecutive numbers that can be formed using elements from L.
// For example, given L = [5, 2, 99, 3, 4, 1, 100], return 5 as we can build a sequence [1, 2, 3, 4, 5] which has length 5.

void solve(int arr[], int n)
{
    int ans = 1;

    sort(arr, arr + n);

    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }

        ans = max(ans, count);
    }

    cout << ans << "\n";
}

void solve1(int arr[], int n)
{
    unordered_set<int> S;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        S.insert(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (S.find(arr[i] - 1) == S.end())
        {
            int j = arr[i];
            while (S.find(j) != S.end())
            {
                j++;
            }

            ans = max(ans, j - arr[i]);
        }
    }

    cout << ans << "\n";
}

int main()
{
    int arr[] = {1, 9, 3, 10, 4, 20, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    solve(arr, n);
    solve1(arr, n);
    return 0;
}