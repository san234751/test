#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,w=1,k=0;
    long int q, sum=0;
    printf("Enter a +ve integer less than 10: ");
    scanf("%d",&n);
    for (;;)
    {
        if (n>=10||n<=0)
        {
            printf("Invalid input, enter again: ");
            scanf("%d",&n);
        }
        else
        {
            for (int i = 1; i <=n; i++)
            {
                w=(i*i*0.5)-(i*0.5)+1;
                q=w*w*w*w;
                sum+=q;
            }
            printf("%ld",sum);
            break;
        }
    }
    return 0;
}