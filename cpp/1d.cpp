#include <bits/stdc++.h>

using namespace std;


int N, v[100000];


int main ()
{
    scanf("%d", &N);

    for(int i = 0; i < N; ++i)
        scanf("%d", v+i);
    

    int sum = 0, res = 0;

    for (int i = 0; i < N; i++)
    {
        sum += v[i];

        res = max(res, sum);

        if(sum < 0)
            sum = 0;
    }

    printf("%d\n", res);


    return 0;
}