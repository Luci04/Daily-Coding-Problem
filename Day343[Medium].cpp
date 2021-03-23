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

// Q.Given a binary search tree and a range[a, b](inclusive),
// return the sum of the elements of the binary search tree within the range.

struct Node
{
    int data;
    Node *left, *right;
};

int solve(Node *root, int start, int end)
{
    if (root == NULL)
        return 0;
    if (root->data >= L && root->data <= R)
        return root->data + solve(root->left, start, end) + solve(root->right, start, end);
    if (root->data < L)
        return solve(root->right, start, end);
    else
        return solve(root->left, start, end);
}
