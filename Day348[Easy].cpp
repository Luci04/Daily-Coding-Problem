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

// Q. Implement Ternary Search Tree (Insertion,Search)

struct Node
{
    char data;
    bool isEnd;
    Node *left, *right, *eq;
};

Node *newNode(char data)
{
    Node *temp = new Node;
    temp->left = temp->right = temp->eq = NULL;
    temp->data = data;
    temp->isEnd = 0;
    return temp;
}

void insert(Node **root, char *word)
{
    if (!(*root))
    {
        (*root) = newNode(*word);
    }

    if ((*word) < (*root)->data)
        insert(&(*root)->left, word);
    else if ((*word) > (*root)->data)
        insert(&(*root)->right, word);
    else
    {
        if (*(word + 1))
        {
            insert(&(*root)->eq, word + 1);
        }
        else
        {
            (*root)->isEnd = 1;
        }
    }
}

int search(Node *root, char *word)
{
    if (!root)
        return 0;
    if (*word < root->data)
        return search(root->left, word);
    else if (*word > root->data)
        return search(root->right, word);
    else
    {
        if (*(word + 1))
            return search(root->eq, word + 1);
        return root->isEnd == 1;
    }
}

int main()
{
    struct Node *root = NULL;

    insert(&root, "cat");
    insert(&root, "cats");
    insert(&root, "up");
    insert(&root, "bug");

    printf("\nFollowing are search results for cats, bu and cat respectively\n");
    search(root, "cats") ? printf("Found\n") : printf("Not Found\n");
    search(root, "bu") ? printf("Found\n") : printf("Not Found\n");
    search(root, "cat") ? printf("Found\n") : printf("Not Found\n");

    return 0;
}