#include<stdio.h>
#include<math.h>
long double factorial(int n)
{
    if(n>=1) return n*factorial(n-1);
    else return 1;
}
int main()
{
    double n=pow(10,-8),x,sum=0,q=1;
    printf("Enter the value of x: ");
    scanf("%lf",&x);
    for (int i = 0; (q>n&&q>0)||(q<0&&(q*-1)>n) ; i++){
        long double k=factorial(i);
        q=pow(x,i)/k;
        sum+=q;
    }
    printf("Sum of the series at %0.4f is %e\nValue from C math library= %e",x,sum,exp(x));
    return 0;
}