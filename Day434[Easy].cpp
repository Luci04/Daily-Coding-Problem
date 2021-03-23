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

// Q.Given a binary search tree, find the floor and ceiling of a given integer. The floor is the highest element in the tree less than or equal to an integer, while the ceiling is the lowest element in the tree greater than or equal to an integer.

// If either value does not exist, return None.

struct Node
{
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

void floorCeilBSTHelper(Node *root, int key, int &floor, int &ceil)
{

    while (root)
    {

        if (root->data == key)
        {
            ceil = root->data;
            floor = root->data;
            return;
        }

        if (key > root->data)
        {
            floor = root->data;
            root = root->right;
        }
        else
        {
            ceil = root->data;
            root = root->left;
        }
    }
    return;
}

void floorCeilBST(Node *root, int key)
{

    // Variables 'floor' and 'ceil' are passed by reference
    int floor = -1, ceil = -1;

    floorCeilBSTHelper(root, key, floor, ceil);

    cout << key << ' ' << floor << ' ' << ceil << '\n';
}

int main()
{
    Node *root = new Node(8);

    root->left = new Node(4);
    root->right = new Node(12);

    root->left->left = new Node(2);
    root->left->right = new Node(6);

    root->right->left = new Node(10);
    root->right->right = new Node(14);

    for (int i = 0; i < 16; i++)
        floorCeilBST(root, i);

    return 0;
}