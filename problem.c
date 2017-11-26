
#include <math.h>
#include <stdio.h>

int ispri(int x)
{
    int sqr = sqrt(x);
    if (x == 0 || x == 1)
        return 0;
    for (int i = 2; i <= sqr; ++i)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int number;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &number);
        if (ispri(number))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}