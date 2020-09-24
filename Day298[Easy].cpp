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

// Q A girl is walking along an apple orchard with a bag in each hand. She likes to pick apples from each tree as she goes along, but is meticulous about not putting different kinds of apples in the same bag.
// Given an input describing the types of apples she will pass on her path, in order, determine the length of the longest portion of her path that consists of just two types of apple trees.
// For example, given the input [2, 1, 2, 3, 3, 1, 3, 5], the longest portion will involve types 1 and 3, with a length of four.

int solve(int arr[], int n)
{
    int maxTill = -1;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        int j;
        set<int> st;
        for (j = i; j < n; j++)
        {
            st.insert(arr[j]);
            if (st.size() == 3)
                break;
        }

        temp = j - i;
        maxTill = max(maxTill, temp);
    }

    return maxTill;
}

int main()
{
    int arr[] = {1, 1, 1, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solve(arr, n);
    return 0;
}