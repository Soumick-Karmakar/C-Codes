#include<stdio.h>
#include<math.h>
int binarytodecimal(int num)
{
    int n,power=0,value=0;
    while(num!=0)
    {
        n=num%10;
        value=value+n*pow(2,power);
        num=num/10;
        power+=1;
    }
    return value;
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", binarytodecimal(num));
}
