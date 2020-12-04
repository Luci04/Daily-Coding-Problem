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

// Given a list of strictly positive integers, partition the list into 3 contiguous partitions which each sum up to the same value. If not possible, return null.

// For example, given the following list:

// [3, 5, 8, 0, 8]

// Return the following 3 partitions:

// [[3, 5],
//  [8, 0],
//  [8]]

// Which each add up to 8.

int solve(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if (sum % 3 != 0)
        return 0;

    int s1 = sum / 3;
    int s2 = 2 * sum / 3;

    int index1 = -1, index2 = -1;
    int presum = 0;

    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        if (presum == s1 && index1 == -1)
        {
            index1 = i;
        }

        if (presum == s2 && index1 != -1)
        {
            index2 = i;
            break;
        }
    }

    if (index1 != -1 && index2 != -1)
    {
        cout << index1 << " " << index2 << "\n";
        return 1;
    }

    return 0;
}

int main()
{
    int arr[] = {1, 3, 4, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (solve(arr, n) == 0)
        cout << "-1";
    return 0;
}