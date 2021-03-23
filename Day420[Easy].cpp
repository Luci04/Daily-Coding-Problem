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

// Q.A number is considered perfect if its digits sum up to exactly 10.

// Given a positive integer n, return the n-th perfect number.

// For example, given 1, you should return 19. Given 2, you should return 28.

void solve(int n)
{
    int count = 0;
    int curr;

    for (curr = 19;; curr += 9)
    {
        int sum = 0;
        int num = curr;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum == 10)
        {
            count++;
        }

        if (count == n)
            break;
    }

    cout << curr << "\n";
}

int main()
{
    solve(9);
    return 0;
}