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
struct Point
{
    int x, y;
};

Point cord;

class comp
{
public:
    bool operator()(Point &a, Point &b)
    {
        return abs(a.x * a.x + a.y * a.y) < abs(b.x * b.x + b.y * b.y);
    }
};

void solve(Point arr[], int n)
{
    priority_queue<Point, vector<Point>, comp> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > 2)
            pq.pop();
    }

    while (!pq.empty())
    {
        Point temp = pq.top();
        cout << temp.x << " " << temp.y << "\n";
        pq.pop();
    }
}

int main()
{
    Point arr[] = {{1, 1},
                   {-1, -1},
                   {3, 4},
                   {6, 1},
                   {-1, -6},
                   {-4, -3}};

    int n = sizeof(arr) / sizeof(arr[0]);

    cord = {0, 0};

    solve(arr, n);

    return 0;
}
