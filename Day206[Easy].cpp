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

//Q. A permutation can be specified by an array P, where P[i] represents the location of the element
// at i in the permutation. For example, [2, 1, 0] represents the permutation where elements at
// the index 0 and 2 are swapped.Given an array and a permutation, apply the permutation to the
// array. For example, given the array ["a", "b", "c"] and the permutation [2, 1, 0], return ["c", "b", "a"].

void solve(char a[], int n)
{
    swap(a[0], a[n - 1]);
}

int main()
{
    char a[] = {'a', 'b', 'c'};
    solve(a, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}