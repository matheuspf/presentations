#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;



int exec (int N)
{
    int count = 0;

    vector<int> v(N), u(N);

    for(int i = 0; i < N; ++i)
    {
        v[i] = rand();
        u[i] = rand();
    }


    for(int i = 0; i < N; ++i)
    {
        int found = 0;

        for(int j = 0; j < N; ++j)
        {
            count++;

            if(v[i] == u[j])
            {
                found = 1;
                break;
            }
        }
    }

    return count;
}



int main ()
{
    int count = 0;

    srand(time(0));


    int N;

    scanf("%d", &N);

    printf("%d\n", exec(N));


    return 0;
}