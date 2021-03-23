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

struct Object
{
    time_t t;
    int count = 0;
    string type;
};

bool cond(Object &t1, Object &t2)
{
    return t1.t < t2.t;
}

int main()
{
    int n;
    cin >> n;
    Object arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i].t = time(0);
        cin >> arr[i].count;
        cin >> arr[i].type;
    }

    sort(arr, arr + n, cond);

    int count = 0;
    int maxi = 0;
    time_t start = arr[0].t, end;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].type == "enter")
        {
            count += arr[i].count;
        }
        else
        {
            count -= arr[i].count;
        }

        if (maxi < count)
        {
            end = arr[i].t;
        }
    }

    cout << start << " " << end << "\n";

    return 0;
}