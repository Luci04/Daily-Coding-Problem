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

// Q.Two nodes in a binary tree can be called cousins if they are on the same level of the tree but have different parents. For example, in the following diagram 4 and 6 are cousins.

//     1
//    / \
//   2   3
//  / \   \
// 4   5   6

// Given a binary tree and a particular node, find all cousins of that node.

struct node
{
    int data;
    node *left, *right;
};

void CousinsInBinaryTree(node *root, node *nodetofind)
{
    bool found = false;

    queue<node *> q;

    int size;

    q.push(root);

    while (!q.empty() && found == false)
    {
        size = q.size();

        while (size)
        {
            node *temp = q.front();

            q.pop();

            if (temp->left == nodetofind || temp->right == nodetofind)
            {
                found = true;
            }
            else
            {
                if (temp->left)
                {
                    q.push(temp->left);
                }

                if (temp->right)
                {
                    q.push(temp->right);
                }
            }

            size--;
        }
    }

    size = q.size();

    for (int i = 0; i < size; i++)
    {
        node *p = q.front();
        q.pop();
        cout << p->data << " ";
    }
    cout << "\n";
}

node *newNode(int x)
{
    node *temp = new node;
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->right = newNode(15);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);

    CousinsInBinaryTree(root, root->left->right);

    return 0;
}