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

//Q. You are given a list of N numbers, in which each number is located at most
// k places away from its sorted position. For example, if k = 1, a given element
// at index 4 might end up at indices 3, 4, or 5. Come up with an algorithm that sorts this list in O(N log k) time.

void solve(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> q(arr, arr + k + 1);

    int index = 0;
    for (int i = k + 1; i < n; i++)
    {
        arr[index++] = q.top();
        q.pop();
        q.push(arr[i]);
    }

    while (q.empty() == false)
    {
        arr[index++] = q.top();
        q.pop();
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}