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
    float n=pow(10,-6),x ,sum=0;
    float z=1;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    for (int i = 0; z>n; i++)
    {
        int l=(2*i)+1;
        int k=factorial(l);
        int j=pow(-1,i) ; 
        float q=pow(x,l);
        float e=((j*q)/(k));
        if(e<0) z=(-1)*e;
        else z=e;
        sum+=e;
    }
    printf("Sum of the series at %0.2f is %0.5f",x,sum);
    return 0;
}