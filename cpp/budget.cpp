#include <bits/stdc++.h>

using namespace std;

int M, C, K, price[25][25];
//int memo[210][25];

int shop(int money, int g)
{
    if (money < 0)
        return -1000000000;

    if (g == C)
        return M - money;

    //   if (memo[money][g] != -1)
    //     return memo[money][g];

    int ans = -1000000000;

    for (int model = 1; model <= price[g][0]; model++)
        ans = max(ans, shop(money - price[g][model], g + 1));

    //memo[money][g] = ans;

    return ans;
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

    //memset(memo, -1, sizeof memo);

    score = shop(M, 0);

    if (score < 0)
        printf("no solution\n");

    else
        printf("%d\n", score);

} // return 0;
