void delchar(char *str, char c)
{
    char *p = str;
    while (*str != '\0')
    {
        if (*str != c)
            *p++ = *str;
        str++;
    }
    *p = '\0';
}
void Shift( char s[] )
{
    int i,j=0;
    char out[MAXS];
    for(i=3;s[i]!='\0';i++)
    {
        out[j]=s[i];
        j++;
    }
    out[j]=s[0];
    out[j+1]=s[1];
    out[j+2]=s[2];
    for(i=0;i<=j+2;i++)
    {
        s[i]=out[i];
    }
    s[j+3]='\0';
}
int search( int list[], int n, int x )
{
    int i;
    for(i=0;i<n;i++)
    {
        if(list[i]==x)
        {
            return i;
        }
    }
    return -1;
}
void CountOff(int n, int m, int out[])
{
    int i = 0, j = 0, k = 0, cnt = 0, a[MAXN];
    for (i = 0; i < n; i++)
        a[i] = i + 1;
    i = 0;
    while (cnt < n)
    {
        if (a[i] != 0)
            k++;
        if (k == m)
        {
            j++;
            out[i] = j;
            k = 0;
            cnt++;
            a[i] = 0;
        }
        i++;
        if (i == n)
            i = 0;
    }
}
void sort(int a[], int n)
{
    int i,j,tmp;
    for (j = 0; j < n -1; j++)
    {
        for (i = 0; i < n - 1 - j; i++)
        {

            if (a[i] > a[i + 1])
            {
                tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
            }
        }
    }
}
void f(char *p)
{
    int len, i, temp;
    for (len = 0; p[len] != '\0'; len++);
    for(i=0;i<len/2;i++)
    {
        temp=p[i];
        p[i]=p[len-1-i];
        p[len-1-i]=temp;
    }
}
void f(long int x, char *p)
{
    int i=0,j=0;
    char k[MAXN+1]="";
    if(x<0) sprintf(p, "-%X",(-1)*x);
    else sprintf(p,"%X",x);
}