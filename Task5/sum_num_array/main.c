#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum=0;

    printf("Enter the number of integers inside the array: \n");
    scanf("%d",&n);

    int array[n];
    printf("Enter %d space-separated integers:\n",n);

    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&array[i]);
        sum += array[i];
    }

    printf("the sum of the integers in the array = %d\n",sum);

    return 0;
}
