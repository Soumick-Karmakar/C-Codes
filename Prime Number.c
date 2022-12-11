#include<stdio.h>
main()
{
    int n,c=0,i;
    scanf("%d",&n);
    if(n==1 || n==2 || n==3)
        printf("Not a Prime Number");
    else
    {
        for(i=(n/2); i>1; i--)
        {
            if (n%i==0)
            {
                printf("Not Prime Number");
                c=1;
                break;
            }
        }
        if (c==0)
        {
            printf("Prime Number");
        }
    }
}
