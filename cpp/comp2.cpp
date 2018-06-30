#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;


int binSearch (const vector<int>& v, int l, int u, int val, int* count)
{
    (*count)++;

    if(u - l <= 1)
        return v[l] == val || v[u] == val;

    int x = (u + l) / 2;

    if(val < v[x])
        return binSearch(v, l, x, val, count);

    else if(val > v[x])
        return binSearch(v, x, u, val, count);

    return 1;
}


int exec (int N)
{
    int count = 0;

    vector<int> v(N), u(N);

    for(int i = 0; i < N; ++i)
    {
        v[i] = rand();
        u[i] = rand();
    }

    sort(&u[0], &u[0]+N);


    for(int i = 0; i < N; ++i)
    {
        int found = binSearch(u, 0, N, v[i], &count);
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