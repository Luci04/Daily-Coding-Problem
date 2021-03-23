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

// Q.Given pre-order and in-order traversals of a binary tree, write a function to reconstruct the tree.

// For example, given the following preorder traversal:

// [a, b, d, e, c, f, g]

// And the following inorder traversal:

// [d, b, e, a, f, c, g]

// You should return the following tree:

//     a
//    / \
//   b   c
//  / \ / \
// d  e f  g

struct node
{
    node *left, *right;
    char data;
};

node *newNode(char data)
{
    node *Node = new node;
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

int search(char arr[], int strt, int end, char value)
{
    int i;
    for (i = strt; i <= end; i++)
    {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

node *buildTree(char in[], char pre[], int inStrt, int inEnd)
{
    static int preIndex = 0;

    if (inStrt > inEnd)
        return NULL;

    node *tNode = newNode(pre[preIndex++]);

    if (inStrt == inEnd)
        return tNode;

    int inIndex = search(in, inStrt, inEnd, tNode->data);

    tNode->left = buildTree(in, pre, inStrt, inIndex - 1);
    tNode->right = buildTree(in, pre, inIndex + 1, inEnd);

    return tNode;
}

void printInorder(node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

int main()
{
    char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
    char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
    int len = sizeof(in) / sizeof(in[0]);
    node *root = buildTree(in, pre, 0, len - 1);

    cout << "Inorder traversal of the constructed tree is \n";
    printInorder(root);
    return 0;
}