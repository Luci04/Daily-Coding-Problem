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

int findPeak(int arr[], int l, int r)
{
    int mid = l + (r - l) / 2;
    if (arr[mid] > arr[mid - 1] && arr[mid + 1] < arr[mid])
    {
        return mid;
    }
    else if (arr[mid] > arr[mid - 1] && arr[mid + 1] > arr[mid])
    {
        return findPeak(arr, mid, r);
    }
    else if (arr[mid - 1] > arr[mid] && arr[mid + 1] < arr[mid])
    {
        return findPeak(arr, l, mid);
    }
}

int asc(int arr[], int l, int r, int k)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            l = mid + 1;
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int des(int arr[], int l, int r, int k)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            l = mid + 1;
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int search(int arr[], int l, int r, int k, int index)
{
    if (k > arr[index])
        return -1;
    if (arr[index] == k)
        return index;
    else
    {
        int temp = asc(arr, l, index - 1, k);
        if (temp != -1)
            return temp;
        return des(arr, index + 1, r, k);
    }
}

int main()
{
    int arr[] = {-8, 1, 2, 3, 4, 5, -2, -3};
    int key = 1;
    int n, l, r;
    n = sizeof(arr) / sizeof(arr[0]);
    l = 0;
    r = n - 1;
    int index;
    index = findPeak(arr, l, r);
    cout << index << "\n";
    cout << search(arr, l, r, -3, index) << "\n";

    return 0;
}