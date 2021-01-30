#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x;
	printf("Enter value of x: ");
	scanf("%f",&x);
	float z;
	if (x==0)
	{
		printf("Value of x must be nonzero: try again");
	}
	else{
		z=sin(1/x);
		printf("%0.4f",z);
	}
	return 0;
}