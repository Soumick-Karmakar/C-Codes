#include<stdio.h>
main()
{
    int n,c=1;
    scanf("%d",&n);
    while(n)
    {
        c=c*n;
        n=n-1;
    }
    printf("%d",c);
}
