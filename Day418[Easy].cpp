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

// Q.MegaCorp wants to give bonuses to its employees based on how many lines of codes they have written. They would like to give the smallest positive amount to each worker consistent with the constraint that if a developer has written more lines of code than their neighbor, they should receive more money.

// Given an array representing a line of seats of employees at MegaCorp, determine how much each one should get paid.

// For example, given [10, 40, 200, 1000, 60, 30], you should return [1, 2, 3, 4, 2, 1].

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left[n], right[n];

    memset(left, 0, sizeof(left));
    memset(right, 0, sizeof(right));

    left[0] = right[n - 1] = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            left[i] = left[i - 1] + 1;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1])
            right[i] = right[i + 1] + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << max(left[i], right[i]) << " ";
    }
    cout << "\n";
}

int main()
{
    solve();
    return 0;
}