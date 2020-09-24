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

// Q .You are given a circular lock with three wheels, each of which display the numbers 0 through 9 in order. Each of these wheels rotate clockwise and counterclockwise.
// In addition, the lock has a certain number of "dead ends", meaning that if you turn the wheels to one of these combinations, the lock becomes stuck in that state and cannot be opened.
// Let us consider a "move" to be a rotation of a single wheel by one digit, in either direction. Given a lock initially set to 000, a target combination, and a list of dead ends, write
//  a function that returns the minimum number of moves required to reach the target state, or None if this is impossible.

vector<string> nbrStrs(string key)
{
    vector<string> res;
    for (int i = 0; i < 4; i++)
    {
        string tmp = key;
        tmp[i] = (key[i] - '0' + 1) % 10 + '0';
        res.push_back(tmp);
        tmp[i] = (key[i] - '0' - 1 + 10) % 10 + '0';
        res.push_back(tmp);
    }
    return res;
}

int openLock(vector<string> deadends, string target)
{
    unordered_set<string> de(deadends.begin(), deadends.end());
    unordered_set<string> visited;
    queue<string> bfs;
    string init = "0000";
    if (de.find(init) != de.end())
        return -1;
    int result = 0;
    bfs.push(init);
    visited.insert(init);
    while (!bfs.empty())
    {
        int size = bfs.size();
        for (int i = 0; i < size; i++)
        {
            string t = bfs.front();
            bfs.pop();
            vector<string> nbrs = nbrStrs(t);
            for (auto s : nbrs)
            {
                if (s == target)
                    return ++result;
                if (visited.find(s) != visited.end())
                    continue;
                if (de.find(s) == de.end())
                {
                    bfs.push(s);
                    visited.insert(s);
                }
            }
        }
        result++;
    }
}

int main()
{
    vector<string> deadends = {"0201", "0101", "0102", "1212", "2002"};
    cout << openLock(deadends, "0202");
    return 0;
}