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

// Q.Let's represent an integer in a linked list format by having each node represent a digit in the number. The nodes make up the number in reversed order.

// For example, the following linked list:

// 1 -> 2 -> 3 -> 4 -> 5

// is the number 54321.

// Given two linked lists in this format, return their sum in the same linked list format.

// For example, given

// 9 -> 9

// 5 -> 2

// return 124 (99 + 25) as:

// 4 -> 2 -> 1

struct Node
{
    int data;
    Node *next;
};

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

Node *Sum(Node *a, Node *b)
{
    int sum = 0;
    int carry = 0;

    Node *head = newNode(-1);
    Node *temp = head;
    while (a || b)
    {
        sum = (a ? a->data : 0) + (b ? b->data : 0) + carry;
        // if (a->next)
        a = a->next;
        // if (b->next)
        b = b->next;
        carry = sum / 10;
        temp->next = newNode(sum % 10);
        temp = temp->next;
    }

    if (carry)
        temp->next = newNode(carry);

    return head->next;
}

void Print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main()
{
    Node *head1;
    head1 = newNode(9);
    head1->next = newNode(9);

    Print(head1);

    Node *head2;
    head2 = newNode(5);
    head2->next = newNode(2);

    Print(head2);

    Node *head = Sum(head1, head2);

    Print(head);

    return 0;
}