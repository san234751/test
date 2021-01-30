#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int g=n;
    if (n==0)
    {
        sum=0;
    }
    else if (n>0)
    {
        while (n>0)
        {
            sum+=n%10;
            n/=10;
        }
    }
    else
    {
        n*=(-1);
        while (n>0)
        {
            sum+=n%10;
            n/=10;
        }
    }
    printf("Sum of the digits of %d is %d",g,sum);
    return 0;
}