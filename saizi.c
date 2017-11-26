#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,j;
    int primenum[n+1];
    for(i=1;i<=n;i++)
    {
        primenum[i]=1;
    }
    if(n==1 || n==2) return 1;
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i%2==0) primenum[i]=0;
            else primenum[i]=1;
        }
        for(i=3;i<sqrt(n);i++)
        {
            if(primenum[i]==0)
            {
                for(j=i+1;j<n;j+=i) primenum[i]=0;
            }
        }
    }
    return primenum[n];
}
int main()
{
    int n,i,flag,num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        flag=0;
        scanf("%d",&num);
        if(prime(num)==1) flag=1;
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