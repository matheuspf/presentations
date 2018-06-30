#include <cstdlib> // we use the int version of ’abs’
#include <cstdio>
#include <cstring>


using namespace std;


int row[1000], N, count = 0;


void print ()
{
    for(int i = 0; i < N; ++i)
        printf("%d ", row[i]);
    puts("\n");
}


void printTab ()
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
            printf("|%c", row[j] == i ? '*' : ' ');

        puts("|");
    }

    puts("");
}



bool valid(int r, int c)
{
    for(int i = 0; i < c; ++i)
        if (row[i] == r || (abs(row[i] - r) == abs(i - c)))
            return false;

    return true;
}


void backtrack(int c)
{
    if (c == N)
    {
        count++;
        printTab();
        return;
    }

    for(int r = 0; r < N; ++r)
        if(valid(r, c))
            row[c] = r, backtrack(c + 1);
}



int main ()
{
    scanf("%d", &N);

    backtrack(0);
}