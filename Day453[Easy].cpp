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

struct Node
{
    int data;
    struct Node *left, *right;
};

Node *NewNode(int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node *insert(Node *root, int key)
{
    if (root == NULL)
        return NewNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}

bool solveUntil(Node *root, int k, unordered_set<int> &st)
{
    if (root == NULL)
        return false;

    if (solveUntil(root->left, k, st))
    {
        return true;
    }

    if (st.find(k - root->data) != st.end())
    {
        cout << k - root->data << " " << root->data << "\n";
        return true;
    }
    else
    {
        st.insert(root->data);
    }

    return solveUntil(root->right, k, st);
}

void solve(Node *root, int k)
{
    unordered_set<int> st;
    if (!solveUntil(root, k, st))
    {
        cout << "No Pair Sum\n";
    }
}

int main()
{
    Node *root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 16);
    root = insert(root, 25);
    root = insert(root, 10);

    int k = 33;
    solve(root, k);

    return 0;
}