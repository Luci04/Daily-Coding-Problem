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

// Q.You are given a arrogram consisting of rectangles of different heights. These heights are represented in an input list, such that [1, 3, 2, 5] corresponds to the following diagram:

//       x
//       x
//   x   x
//   x x x
// x x x x

// Determine the hist of the largest rectangle that can be formed only from the bars of the arrogram. For the diagram above, for example, this would be six, representing the 2 x 3 hist at the bottom right.

int solve(int arr[], int n)
{
    stack<int> st;
    int max_area = 0;
    int tp;
    int area_with_top;

    int i = 0;

    while (i < n)
    {
        if (st.empty() || arr[st.top()] <= arr[i])
        {
            st.push(i);
            i++;
        }
        else
        {
            tp = st.top();
            st.pop();

            area_with_top = arr[tp] * (st.empty() ? i : i - st.top() - 1);

            max_area = max(area_with_top, max_area);
        }
    }

    while (!st.empty())
    {
        tp = st.top();
        st.pop();
        area_with_top = arr[tp] * (st.empty() ? i : i - st.top() - 1);

        max_area = max(area_with_top, max_area);
    }

    return max_area;
}

int main()
{
    int arr[] = {1, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << solve(arr, n) << "\n";
    return 0;
}