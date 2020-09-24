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

//Q. You are given an string representing the initial conditions of some dominoes. Each element can take one of three values:

//     L, meaning the domino has just been pushed to the left,
//     R, meaning the domino has just been pushed to the right, or
//     ., meaning the domino is standing still.

// Determine the orientation of each tile when the dominoes stop falling. Note that if a domino receives a force from the left and right side simultaneously, it will remain upright.

// For example, given the string .L.R....L, you should return LL.RRRLLL.

// Given the string ..R...L.L, you should return ..RR.LLLL.

string push(string dominoes)
{
    vector<int> force(dominoes.length());
    int f = 0;

    for (int i = 0; i < dominoes.length(); i++)
    {

        if (dominoes[i] == 'R')
            f = dominoes.length();
        else if (dominoes[i] == 'L')
        {
            f = 0;
        }
        else
        {
            f = max(f - 1, 0);
        }

        force[i] = f;
    }

    f = 0;

    for (int i = dominoes.length() - 1; i >= 0; i--)
    {
        if (dominoes[i] == 'L')
            f = dominoes.length();
        else if (dominoes[i] == 'R')
            f = 0;
        else
            f = max(f - 1, 0);
        force[i] -= f;
    }

    string result;

    for (auto &k : force)
    {
        result.push_back((k == 0) ? '.' : ((k > 0) ? 'R' : 'L'));
    }

    return result;
}

int main()
{
    cout << push(".L.R....L");
    return 0;
}