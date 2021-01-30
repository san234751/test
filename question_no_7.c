#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
    if(n>=1) return n*factorial(n-1);
    else return 1;
}
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n>=0) {
        int k=factorial(n);
        printf("Factorial of %d is %d",n,k);
    }
    else printf("n must be non-negative");
    return 0;
}