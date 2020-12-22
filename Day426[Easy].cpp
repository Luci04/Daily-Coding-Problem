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

// Q.Given a binary tree, return the level of the tree with minimum sum.

struct Node
{
    int data;
    Node *left, *right;
};

int solve(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int result = INT_MAX;

    while (!q.empty())
    {
        int size = q.size();
        int res = 0;
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            q.pop();
            res += temp->data;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        result = min(result, res);
    }

    return result;
}
