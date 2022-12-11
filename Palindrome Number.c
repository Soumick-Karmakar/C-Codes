#include<stdio.h>
#include<string.h>
main()
{
    char a[15];
    int n,i,c,x;
    scanf("%s",a);
    n=strlen(a);
    x=n/2;
    n=n-1;
    for(i=0; i<x; i++)
    {
        if (a[i]!=a[n-i])
        {
            printf("Not Palindrome");
            c=0;
            break;
        }
    }
    if (c!=0)
    {
        printf("Palindrome");
    }

}
