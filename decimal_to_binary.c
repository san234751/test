#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum=0,g,i=0,w=0;
    system("cls");
    printf("Enter a +ve no less than 32: ");
    scanf("%d",&n);
    g=n;
    int *a=(int*)malloc(sizeof(n));
    if(n>0&&n<=32){
        for (int i = 0; n>0; i++)
        {
            a[i]=n%2;
            n/=2;
            w++;
        }
        printf("Binary wquivalent of %d is ",g);
        for (int j = w-1; j >=0; j--)
        {
            printf("%d",a[j]);
        }  
    }
    else{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
        printf("Entered number is out of range");
    }
    return 0;
}