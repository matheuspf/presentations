#include <bits/stc++.h>


using namespace std;


int M, C, K, price[25][25]; // price[g (<= 20)][model (<= 20)]
int memo[210][25]; // dp table memo[money (<= 200)][g (<= 20)]


int shop(int t, int g)
{
    if (t < 0)
        return -1e8;

    if (c == C)
        return M - t;

    if (memo[money][g] != -1) return memo[money][g]; // this state has been visited before
    
    int ans = -1000000000;
    for (int model = 1; model <= price[g][0]; model++) // try all possible models
    ans = max(ans, shop(money - price[g][model], g + 1));
    return memo[money][g] = ans; // assign ans to dp table + return it!
}

int main()
{
    int i, j, TC, score;


    scanf("%d %d", &M, &C);

    for (i = 0; i < C; i++)
    {
        scanf("%d", &K);
        price[i][0] = K;

        for (j = 1; j <= K; j++)
            scanf("%d", &price[i][j]);
    }

memset(memo, -1, sizeof memo); // initialize DP memo table
score = shop(M, 0); // start the top-down DP
if (score < 0) printf("no solution\n");
else           printf("%d\n", score);



} // return 0;