#include <vector>
#include <string>
#include <set>
#include <map>


using namespace std;


int main ()
{
    int N;
    int v[100000];

    scanf("%d", &N);

    for(int i = 0; i < N; ++i)
        scanf("%d", v+i);


    int m = -1e8;

    for(int i = 0; i < N-1; ++i)
    {
        for(int j = i+1; j < N; ++j)
        {
            int sum = 0;

            for(int k = i; k < j; ++k)
                sum += v[k];

            //m = max(m, sum);
            if(sum > m)
                m = sum;
        }
    }

    printf("%d\n", m);



    return 0;
}