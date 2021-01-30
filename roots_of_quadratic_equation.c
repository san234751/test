#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    float r1,r2,d=b*b-4*a*c,w=(-c/b);
    if (a==0)
    {
        printf("Linear equation: root=%0.3f",w);
    }
    else if(a==0&&b==0)
    {
        printf("No solution: a & b both zero");
    }
    else if(d>=0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots are real: %0.3f and %0.3f ",r1,r2);
    }
    else if(d<0){
        float r=(-1)*d;
        r1=(-b)/(2*a);
        r2=(sqrt(r))/(2*a);
        printf("The roots are complex: %0.3f+%0.3f i and %0.3f-%0.3f i",r1,r2,r1,r2);
    }
    
    return 0;
}