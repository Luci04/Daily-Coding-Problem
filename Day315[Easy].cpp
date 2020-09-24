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

#define N 5
#define M 4

// Q.In linear algebra, a Toeplitz matrix is one in which the elements
//  on any given diagonal from top left to bottom right are identical.

bool check(int mat[N][M], int i, int j)
{
    int res = mat[i][j];
    while (++i < N && ++j < M)
    {
        if (mat[i][j] != res)
            return false;
    }

    return true;
}

bool isToepliz(int mat[N][M])
{
    for (int i = 0; i < M; i++)
    {
        if (!check(mat, 0, i))
            return false;
    }

    for (int i = 0; i < N; i++)
    {
        if (!check(mat, i, 0))
            return false;
    }

    return true;
}

int main()
{
    int mat[N][M] = {
        {6, 7, 8, 9},
        {4, 6, 7, 8},
        {1, 4, 6, 7},
        {0, 1, 4, 6},
        {2, 0, 1, 4}};

    if (isToepliz(mat))
        cout << "Matrix is a Toepliz \n";
    else
        cout << "Matrix is not a Toepliz\n ";

    return 0;
}