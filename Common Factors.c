#include<stdio.h>
void main()
{
    int i,j,a,b,c=0,d=0,count=0,arr_a[50],arr_b[50];
    scanf("%d %d",a,b);
    for (int i=(a/2); i>0; i--)
    {
        if(a%i==0)
        {
            arr_a[c]=i;
            c+=1;
        }
    }
    for (int i=(b/2); i>0; i--)
    {
        if(b%i==0)
        {
            arr_b[d]=i;
            d+=1;
        }
    }
    for(i=c; i>-1; i--)
    {
        for(j=d; j>-1; j--)
        {
            if (arr_a[i]==arr_b[j])
            {
                count+=1;
            }
        }
    }
    printf("%d",count);
}
