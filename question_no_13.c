#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r=0;
    printf("The prime numbers between 1 and 99 are:\n");
    for (int i = 2; i <=100 ; i++)
    {
        int g=0;
        for (int j = 2; j < i; j++)
        {
            if((i%j)==0)
            {
                g=1;
                break;
            }   
        }
        if (g==0)
        {
            if (r%7==0)
            {
                printf("\n");
            }
            r++;
            printf("%d\t",i);
        }   
    }
    return 0;
}