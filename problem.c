#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int Btest(int a, int n)
{
    int s = 0;
    int t = n - 1;
    int i, j, k;
    int x = 1;
    int y;
    i = 1;
    do
    {
        s++;
        t = t / 2;
    } while ((t % 2) != 1);

    while (i <= t)
    {
        x = (x * a) % n;
        i++;
    }
    if ((x == 1) || (x == n - 1))
        return 1;
    for (j = 1; j <= s - 1; j++)
    {
        y = 1;
        for (k = 1; k <= j; k++)
        {
            y = 2 * y;
        }
        i = 1;
        x = 1;
        while (i <= (y * t))
        {
            x = (x * a) % n;
            i++;
        }
        if (x == n - 1)
            return 1;
    }
    return 0;
}

int MillRab(int n)
{
    int a;
    srand((unsigned)time(NULL));
    a = rand() % (n - 3) + 2;
    return Btest(a, n);
}

int MillerRabin(int n, int k)
{
    int i;
    for (i = 1; i <= k; i++)
    {
        if (MillRab(n) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,i,flag,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        flag=0;
        scanf("%d",&num);
        if(num==1 || num==2 || num==3)
        {
            printf("Yes\n");
        }
        else
        {
            if(MillerRabin(num,(int)log10(num))) flag=1;
        }
        if(flag==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}