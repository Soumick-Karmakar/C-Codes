#include<stdio.h>
main()
{
    int a=0,b=1,c,n,i;
    scanf("%d",&n);
    n=n-2;
    printf(" %d %d",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }

}
