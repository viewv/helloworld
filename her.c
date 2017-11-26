#include <stdio.h> 
#include<math.h>
#define N 10000001
int prime[N];
int main()
{
    int i, j;
    for (i = 2; i < N; i++)
        if (i % 2)
            prime[i] = 1;
        else
            prime[i] = 0;
    for (i = 3; i <= sqrt(N); i++)
    {
        if (prime[i])
            for (j = i + i; j < N; j += i)
                prime[i] = 0;
    }
    for (i = 2; i < 100; i++)
    {
        if (prime[i])
            printf("%d ", i);
    }
    return 0;
}