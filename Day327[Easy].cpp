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

// Q.Write a program to merge two binary trees. Each node in the new tree
// should hold a value equal to the sum of the values of the corresponding
// nodes of the input trees.

struct Node
{
    int data;
    Node *left, *right;
};

Node *newNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *Merge(Node *root1, Node *root2)
{
    if (!root1)
        return root2;
    if (!root2)
        return root1;
    root1->data += root2->data;
    root1->left = Merge(root1->left, root2->left);
    root1->right = Merge(root1->right, root2->right);
    return root1;
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

    Node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5);
    root1->right->right = newNode(6);

    Node *root2 = newNode(4);
    root2->left = newNode(1);
    root2->right = newNode(7);
    root2->left->left = newNode(3);
    root2->right->left = newNode(2);
    root2->right->right = newNode(6);

    Node *root3 = Merge(root1, root2);

    cout << "Inorder Traversal of New Tree\n";

    inorder(root3);

    return 0;
}