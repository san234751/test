#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    int *a=(int*)malloc(100*sizeof(int));
    for (;;)
    {
        if (i>=1) printf("Enter next +ve integer: ");
        else printf("Enter a +ve integer: ");
        scanf("%d",&n);
        if (n<=0&&i==0)
        {
            printf("No positive number entered");
            i=-1;
            break; 
        }
        else if(n<0) break;
        else *(a+i)=n;i++;
    }
    if(i!=-1)
    {
        printf("Number of +ve values entered is %d\n",i);
        int max,min;
        float sum=0;
        max=min=a[0];
        for (int j = 0; j < i; j++)
        {
            if(a[j]>max) max=a[j];
            if(a[j]<min) min=a[j];
            sum+=a[j];
        }
        float q=(sum/i);
        printf("Maximum value entered is %d\n",max);
        printf("Minimum value entered is %d\n",min);
        printf("Average value is %0.4f\n",q);
    }
    free(a);
    return 0;
}