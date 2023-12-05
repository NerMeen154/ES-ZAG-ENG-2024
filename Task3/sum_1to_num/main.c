#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ;
    float sum=0;

    printf("Enter the number for which you need to sum from 1 to it: ");
    scanf("%d",&num);

    sum= (num*(num+1))/2.0;

    printf("The sum from 1 to %d = %.2f",num,sum);

    return 0;
}
