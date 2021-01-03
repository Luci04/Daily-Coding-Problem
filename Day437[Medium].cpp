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

const int N = 256;

int solve(string str, string pat)
{

    int len1 = str.length();
    int len2 = pat.length();

    // check if string's length is less than pattern's
    // length. If yes then no such window can exist
    if (len1 < len2)
    {
        return -1;
    }
    int hash_pat[N] = {0};
    int hash_str[N] = {0};

    for (int i = 0; i < len2; i++)
        hash_pat[pat[i]]++;

    int start = 0, start_index = -1, min_len = INT_MAX;

    int count = 0;

    for (int j = 0; j < len1; j++)
    {
        hash_str[str[j]]++;

        if (hash_pat[str[j]] != 0 &&
            hash_str[str[j]] <= hash_pat[str[j]])
            count++;

        if (count == len2)
        {
            while (hash_str[str[start]] > hash_pat[str[start]] || hash_pat[str[start]] == 0)
            {

                if (hash_str[str[start]] > hash_pat[str[start]])
                    hash_str[str[start]]--;
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    return min_len;
}

int main()
{
    string str = "this is a test string";
    string pat = "tist";

    cout << "Smallest window is : \n"
         << solve(str, pat);

    return 0;
}