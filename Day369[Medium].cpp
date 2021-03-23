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

// Q.You’re tracking stock price at a given instance of time. Implement an API with the following functions:
// add(), update(), remove(), which adds/updates/removes a datapoint for the stock price you are tracking.
// The data is given as (timestamp, price), where timestamp is specified in unix epoch time.
// Also, provide max(), min(), and average() functions that give the max/min/average of all values seen thus far.

class solve
{
private:
    vector<int> v;

public:
    void maxi()
    {
        cout << *max_element(v.begin(), v.end()) << "\n";
    }

    void mini()
    {
        cout << *min_element(v.begin(), v.end()) << "\n";
    }

    void add(int x)
    {
        v.push_back(x);
    }

    void average()
    {
        cout << accumulate(v.begin(), v.end(), 0) / v.size() << "\n";
    }

    void update(int index, int data)
    {
        v[index] = data;
    }
};

int main()
{
    solve O;
    O.add(1);
    O.add(2);
    O.add(3);
    O.add(4);
    O.add(5);
    O.average();
    O.mini();
    O.maxi();
    O.update(4, 10);
    O.maxi();
    return 0;
}