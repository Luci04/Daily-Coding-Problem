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

// Q. Given a linked list and a positive integer k, rotate the list to the right by k places.
// For example, given the linked list 7 -> 7 -> 3 -> 5 and k = 2, it should become 3 -> 5 -> 7 -> 7.

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    };
};

void print(Node *root)
{
    while (root)
    {
        cout << root->data << " ";
        root = root->next;
    }
    cout << "\n";
}

Node *rotate(Node *root, int k)
{
    Node *head = root;
    Node *temp = root, *prev = NULL;
    while (k--)
    {
        prev = temp;
        temp = temp->next;
    }
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = head;

    head = prev->next;
    prev->next = NULL;

    return head;
}

int main()
{
    Node *root = new Node(7);
    root->next = new Node(7);
    root->next->next = new Node(3);
    root->next->next->next = new Node(5);
    print(root);
    int k = 2;
    root = rotate(root, k);
    print(root);
}