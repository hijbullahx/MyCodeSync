#include<stdio.h>
int fact(int n);
int fact(int n)
{
    int r;
    if (n==0)
    {
        r=1;
    }
    else
    {
        r=n*fact(n-1);

    }
    return r;
}
main()
{
    int n, x;
    scanf("%d", &n);
    x=fact(n);
    printf("%d", x);
}
