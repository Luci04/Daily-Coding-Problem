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

// Q.You are given a string of length N and a parameter k.
// The string can be manipulated by taking one of the first k
// letters and moving it to the end.

// Write a program to determine the lexicographically smallest string
// that can be created after an unlimited number of moves.

void solve(string str, int k)
{
    string X = "";
    while (str.length() > 0)
    {
        char temp = str[0];
        int index = 0;

        for (int i = 1; i < k && i < str.length(); i++)
        {
            if (str[i] < temp)
            {
                temp = str[i];
                index = i;
            }
        }

        X = X + temp;

        str.erase(str.begin() + index);
    }

    cout << X << "\n";
}

int main()
{
    string str = "agangru";
    int k = 1;
    solve(str, k);

    return 0;
}