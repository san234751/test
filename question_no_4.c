#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,w=1,i=1,k=0;
    long int q, sum=0;
    printf("Enter a +ve integer less than 50: ");
    scanf("%d",&n);
    if (n==0||n<0||n>50)
    {
        printf("Invalid input");
    }
    else
    {
        while (k<=n)
        {
            w=(i*i*0.5)-(i*0.5)+1;
            q=w*w*w*w;
            sum+=q;
            k=(i*i*0.5)+(i*0.5)+1;
            ++i;
        }
        printf("%ld",sum);
    }
    return 0;
}