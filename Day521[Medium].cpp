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

void solve(string str, int n)
{
    if (n == 1)
    {
        cout << str << "\n";
        return;
    }

    string arr[n];

    int row = 0;
    bool down = true;

    for (int i = 0; i < str.length(); i++)
    {
        arr[row].push_back(str[i]);

        if (row == n - 1)
            down = false;

        if (row == 0)
            down = true;

        down ? row++ : row--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    cout << "\n";
}

int main()
{
    solve("GEEKSFORGEEKS", 3);
    return 0;
}