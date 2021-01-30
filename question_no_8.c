#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int factorial(int n)
{
    if(n>=1) return n*factorial(n-1);
    else return 1;
}
int main()
{
    int n;
    float x;
    printf("Enter the value of n & x: ");
    scanf("%d %f",&n,&x);
    if (n<=0)
    {
        printf("Number of terms must be +ve");
    }
    else
    {
        float sum=0;
        for (int i = 0; i <n; i++)
        {
            int l=(2*i)+1;
            int k=factorial(l);
            int j=pow(-1,i) ; 
            float q=pow(x,l);
            float e=((j*q)/(k));
            sum+=e;
        }
        printf("Sum of the series at x=%0.2f with %d terms is %0.5f",x,n,sum);
    }
    return 0;
}