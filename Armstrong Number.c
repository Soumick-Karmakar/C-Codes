#include<stdio.h>
main()
{
    int a,b,c=0,d=0,arr[10];
    scanf("%d",&a);
    b=a;
    while(a>9)
    {
        arr[c]=a%10;
        a=a/10;
        c+=1;
    }
    arr[c]=a;
    for(a=0; a<=c; a++)
    {
        d=d+(arr[a]*arr[a]*arr[a]);
    }
    if(d==b)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
}
