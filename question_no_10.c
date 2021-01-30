#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,g,r=0,d;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    g=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    if(g==r)
    {
        printf("%d is a palindrome number",g);
    }
    else
    {
        printf("%d is NOT a palindrome number",g);
    } 
    return 0;
}