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

// Given a stack of N elements, interleave the first half of the stack with the second half reversed using
// only one other queue .This should be done in - place.

// stack<int> solve(stack<int> &st)
// {
//     // if (st.size() % 2 != 0)
//     //     return {};
//     // queue<int> q;
//     // int halfSize = st.size() / 2;

//     // for(int i=0;i<halfSize;i++)
//     // {

//     // }
// }

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
    queue<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while (!s.empty())
    {
        cout << s.front() << " ";
        s.pop();
    }

    return 0;
}