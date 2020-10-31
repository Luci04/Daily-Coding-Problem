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

// Given two sorted iterators, merge it into one iterator.

// For example, given these two iterators:

// foo = iter([5, 10, 15])
// bar = iter([3, 8, 9])

// You should be able to do:

// for num in merge_iterators(foo, bar):
//     print(num)

// # 3
// # 5
// # 8
// # 9
// # 10
// # 15

void solve(int arr1[], int arr2[], int n, int m, int i, int j)
{
    if (i == n || j == m)
        return;
    if (arr1[i] > arr2[j])
    {
        cout << arr2[j] << " ";
        solve(arr1, arr2, n, m, i, j + 1);
    }
    else
    {
        cout << arr1[i] << " ";
        solve(arr1, arr2, n, m, i + 1, j);
    }

    return;
}

int main()
{
    int arr1[] = {5, 10, 15};
    int arr2[] = {3, 8, 9};

    solve(arr1, arr2, 3, 3, 0, 0);

    return 0;
}