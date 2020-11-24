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

// Q.Given a linked list and an integer k, remove the k-th node from the end of the list and return the head of the list.

// k is guaranteed to be smaller than the length of the list.

// Do this in one pass.

struct Node
{
    int data;
    Node *next;
};

Node *newNode(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    return temp;
}

void display(Node *root)
{
    while (root)
    {
        cout << root->data << " ";
        root = root->next;
    }

    cout << "\n";
}

Node *Delete(Node *head, int k)
{
    int len = 0;

    Node *temp = head;

    while (temp)
    {
        temp = temp->next;
        len++;
    }

    if (len == k)
        return head->next;

    temp = head;

    for (int i = 0; i <= len - k; i++)
    {
        temp = temp->next;
    }

    delete temp->next;

    temp->next = temp->next->next;

    return head;
}

int main()
{
    Node *root = newNode(1);
    root->next = newNode(2);
    root->next->next = newNode(3);
    root->next->next->next = newNode(4);
    display(root);
    root = Delete(root, 4);
    display(root);

    return 0;
}