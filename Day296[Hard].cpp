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

// Q.Good morning! Here's your coding interview problem for today.
// This problem was asked by Etsy.
// Given a sorted array, convert it into a height-balanced binary search tree.

struct Node
{
    int data;
    Node *left;
    Node *right;
};

//New Node of Tree
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->left = temp->right = NULL;
    temp->data = data;
    return temp;
}

Node *TreeFromArray(vector<int> &v, int start, int end)
{
    if (start > end)
        return nullptr;

    int mid = (start + end) / 2;

    Node *root = newNode(v[mid]);

    root->left = TreeFromArray(v, start, mid - 1);

    root->right = TreeFromArray(v, mid + 1, end);

    return root;
}

void Inorder(Node *root)
{
    if (root)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

int main()
{
    //Sorted Array
    vector<int> v = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    Node *root = TreeFromArray(v, 0, v.size() - 1);

    //Check Wether the BST fromed is Correct or Not
    Inorder(root);

    cout << endl;
    return 0;
}