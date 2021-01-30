#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    float n;
    printf("Enter a +ve decimal fraction less than 1: ");
    scanf("%f",&n);
    int i=0;
    double frac=n;
    int *binary=(int*)malloc(sizeof(n));
    int z=4;
    if(n>0&&n<1)
    {
        while (n!=0&&z--)
        {
            n*=2;
            int f=n;
            float r=n-f;
            //printf("%f ",r);
            int k=n-r;
            binary[i]=k;
            i++;
            n=r;
        }
        printf("0.");
        for (int j = 0; j < i; j++)
        {
            printf("%d",binary[j]);
        }
    }
    else
    {
        printf("Entered number is not a +ve decimal fraction less than 1");
    }
    return 0;
}