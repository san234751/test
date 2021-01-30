#include<stdio.h>
#include<math.h>
#define pi 3.14159
double func(double n){
    double k=(((1-n)*cos(n))-sin(n));
    return k;
}
int cbracket(double a,double b){
    int z=0;
    for (double i = 0; i <= pi/2; i++)
    {
        double q=func(i);
        if(i>a&&i<b&&q==0)
        {
           z=1;
           break;
        }
    }
    return z;
}
double rootb(double a,double b,double e,int n)
{
    double r;
    int i=0;
    int t=0;
    int w=cbracket(a,b);
    for (i = 0; i < n; i++)
    {
        r=(a+b)/2;
        double k=func(r);
        if((k==0)||((b-a)<e)) break;
        double j=func(a),e=func(b);
        if ((j*k)<0) b=r;
        else if((e*k)<0) a=r;
    }
    if (w==1)
    {
        printf("Root must be bracketed");
        return 0;
    }
    else if(i>=n)
    {
        printf("Increase the max iteration");
        return 0;
    }
    else
        return r; 
}
int main()
{
    double eps,a,b;
    int Nmax;
    printf("Enter eps and Nmax :");
    scanf("%lf%d",&eps,&Nmax);
    printf("Enter a, b :");
    scanf("%lf%lf",&a,&b);
    double y=rootb(a,b,eps,Nmax);
    if(y==0||y==5)
    {
       return 0;
    }
    else
        printf("Root = %lf",y);
    // printf("%f",sin(pi/2));
    return 0;
}