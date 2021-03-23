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

void solve()
{
}

int main()
{
    vector<string> v = {"eat",
                        "ate",
                        "apt",
                        "pat",
                        "tea",
                        "now"};
    unordered_map<string, vector<string>> mp;

    for (int i = 0; i < v.size(); i++)
    {
        string str = v[i];

        sort(str.begin(), str.end());

        mp[str].push_back(v[i]);
    }

    for (auto it : mp)
    {
        for (int i = 0; i < it.second.size(); i++)
        {
            cout << it.second[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}