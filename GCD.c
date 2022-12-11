#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    int numbers[a],i,small;
    for(i=0; i<a; i++)
    {
        scanf("%d",&numbers[i]);
    }
    small=numbers[0];
    for(i=0; i<a; i++)
    {
        if (small>numbers[i])
        {
            small=numbers[i];
        }
    }
    for(i=0; i<a; i++)
    {
        if (numbers[i]%small!=0 && c==0)
        {
            small=small/2;
            c=1;
            i=0;
        }
        else if (numbers[i]%small!=0 && c==1)
        {
            small=small-1;
            i=0;
        }
    }
    printf("\n GCD of %d numbers is %d",a,small);
}
