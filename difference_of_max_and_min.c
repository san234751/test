#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a[4];
    printf("Enter four numbers : ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%f",&a[i]);
    }
    float min=a[0],max=a[0];
    for (int i = 0; i < 4; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    float n=max-min;
    printf("Difference is %0.4f",n);
    return 0;
}