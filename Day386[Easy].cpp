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

// Q.Given a string, sort it in decreasing order based on the frequency of characters.
// If there are multiple possible solutions, return any of them.
// For example, given the string tweet, return tteew. eettw would also be acceptable.
unordered_map<char, int> mp;

bool fun(char a, char b)
{
    if (mp[a] == mp[b])
        return a - 'a' < b - 'a';
    return mp[a] > mp[b];
}

void solve(string &str)
{

    for (auto it : str)
    {
        mp[it]++;
    }

    sort(str.begin(), str.end(), fun);

    cout << str << " ";
}

int main()
{
    string str = "tweet";
    solve(str);
    return 0;
}