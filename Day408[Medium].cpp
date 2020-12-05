
#include <climits>
#include <iostream>

using namespace std;

//Q. Given an array of numbers representing the stock prices of a company in chronological order and an integer k, return the maximum profit you can make from k buys and sells. You must buy the stock before you can sell it, and you must sell the stock before you can buy it again.

// For example, given k = 2 and the array [5, 2, 4, 0, 1], you should return 3.

int maxProfit(int price[], int n, int k)
{
    int profit[k + 1][n + 1];

    for (int i = 0; i <= k; i++)
        profit[i][0] = 0;

    for (int j = 0; j <= n; j++)
        profit[0][j] = 0;

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int max_so_far = INT_MIN;

            for (int m = 0; m < j; m++)
                max_so_far = max(max_so_far,
                                 price[j] - price[m] + profit[i - 1][m]);

            profit[i][j] = max(profit[i][j - 1], max_so_far);
        }
    }

    return profit[k][n - 1];
}

int main()
{
    int k = 2;
    int price[] = {10, 22, 5, 75, 65, 80};
    int n = sizeof(price) / sizeof(price[0]);

    cout << maxProfit(price, n, k);

    return 0;
}