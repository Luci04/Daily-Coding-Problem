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

// Q.This problem was asked by Wayfair.

// You are given a 2 x N board, and instructed to completely cover
//the board with the following shapes :

//     Dominoes, or 2 x 1 rectangles.
//     Trominoes, or L-shapes.

void solve(int n)
{
    if (n <= 3)
        cout << n << "\n";
    else
    {
        int a = 0, b = 1, c;
        for (int i = 0; i < n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << "\n";
    }
}

int main()
{
    solve(5);
    return 0;
}