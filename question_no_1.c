#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    printf("Enter integers between 1 & 9 both inclusive, outside range to stop\n");
    printf("Enter integer :");
    scanf("%d",&n);
    while(n>0&&n<=9)
    {
        int z=n%2,i=n%3;
        switch (i)
        {
        case 0:
            odd++;
            break;
        }
        switch (z)
        {
        case 1:
            printf("Enter integer :");
            scanf("%d",&n);
            break;
        case 0:
            even++;
            printf("Enter integer :");
            scanf("%d",&n);
            break;
        }
    }
    printf("Total no of even integer entered is %d\nTotal no of multiples of 3 entered is %d",even,odd);
    return 0;
}