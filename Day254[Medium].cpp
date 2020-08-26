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

// Q.Recall that a full binary tree is one in which each node is either a leaf node,
//or has two children. Given a binary tree, convert it to a full one by
// removing nodes with only one child.

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

Node *solve(Node *root)
{
    if (root == NULL)
    {
        return root;
    }

    root->left = solve(root->left);
    root->right = solve(root->right);

    if (root->left == NULL && root->right == NULL)
    {
        return root;
    }

    if (root->left == NULL)
    {
        Node *temp = root->right;
        free(root);
        return temp;
    }

    if (root->right == NULL)
    {
        Node *temp = root->left;
        free(root);
        return temp;
    }

    return root;
}

void inorder(Node *root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main()
{
    Node *NewRoot = NULL;
    Node *root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->left->right = newNode(5);
    root->right->right = newNode(4);
    root->right->right->left = newNode(6);
    root->right->right->right = newNode(7);

    inorder(root);
    cout << "\n";

    NewRoot = solve(root);

    inorder(NewRoot);
    cout << "\n";

    return 0;
}