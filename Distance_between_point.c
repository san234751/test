#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2;
    printf("Enter coordinates of points A: ");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates of points B: ");
    scanf("%f%f",&x2,&y2);
    float distance,u=(y1+y2)/2,l=(x1+x2)/2;
    distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("Distance between A and B is %0.2f\n",distance);
    printf("The coordinates of midpoint of A and B are (%0.2f , %0.2f)",l,u);
    return 0;
}