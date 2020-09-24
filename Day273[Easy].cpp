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

// Q. A fixed point in an array is an element whose value is equal to its index.
//  Given a sorted array of distinct elements, return a fixed point, if one exists. Otherwise, return False.

int Binary(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == mid)
            return mid;
        if (mid > arr[mid])
            start = mid + 1;
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {-6, 0, 2, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Binary(arr, n);
    return 0;
}