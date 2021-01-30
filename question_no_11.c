#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int g,n,i=0,sum=0,t;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    t=g=n;
    if(n<0) printf("Input must be non-negative integer");
    else{
        while (n!=0)
        {
            i++;
            n/=10;
        }
        while (g!=0)
        {
            int k=g%10;
            sum+=pow(k,i);
            g/=10;
        }
        if(sum==t) printf("%d is an Armstrong number",t);
        else printf("%d is NOT an Armstrong number",t);
    }
    return 0;
}