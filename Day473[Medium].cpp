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

// Q.Write an algorithm that computes the reversal of a directed graph.
// For example, i
// f a graph consists of A -> B -> C, it should become A <- B <- C.

using namespace std;

class Graph
{
private:
    int V;
    vector<int> *adj;

public:
    Graph(int nodes)
    {
        V = nodes;
        adj = new vector<int>[V];
    }
    void addEdge(int a, int b)
    {
        adj[a].push_back(b);
    }

    void transpose()
    {
        vector<int> tran[V];

        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < adj[i].size(); j++)
            {
                tran[adj[i][j]].push_back(i);
            }
        }

        printGraph(tran);
    }

    void printGraph(vector<int> *vec)
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "->";
            for (int j = 0; j < vec[i].size(); j++)
            {
                cout << vec[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 1);
    g.addEdge(2, 3);
    g.printGraph();
    g.transpose();
    return 0;
}