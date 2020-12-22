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

//Q. Write a program to merge two binary trees. Each node in the new tree should hold a value equal to the sum of the values of the corresponding nodes of the input trees.

// If only one input tree has a node in a given position, the corresponding node in the new tree should match that input node.

struct Node
{
    int data;
    Node *left, *right;
};

Node *merge(Node *root1, Node *root2)
{
    if (root1 == NULL)
        return root2;
    if (root2 == NULL)
    {
        return root1;
    }

    root1->data += root2->data;
    root1->left = merge(root1->left, root2->left);
    root1->right = merge(root1->right, root2->right);

    return root1;
}

int main()
{
    return 0;
}