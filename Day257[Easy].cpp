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
// Q.Given an array of integers out of order,
//  determine the bounds of the smallest window that must be sorted in order
//  for the entire array to be sorted. For example, given [3, 7, 5, 6, 9],
//  you should return (1, 3).

void solve(int arr[], int n)
{
    int left = -1, right = -1;

    int max_ = INT_MIN;
    int min_ = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_)
        {
            max_ = arr[i];
        }
        if (arr[i] < max_)
        {
            right = i;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < min_)
        {
            min_ = arr[i];
        }
        if (arr[i] > min_)
        {
            left = i;
        }
    }

    cout << left << " " << right << "\n";
}
int main()
{
    int arr[] = {3, 7, 5, 6, 9};
    solve(arr, 5);
    return 0;
}