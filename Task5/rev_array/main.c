#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Enter the number of integers inside the array: \n");
    scanf("%d",&n);

    int array[n], rev_array[n];
    printf("Enter %d space-separated integers:\n",n);

    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&array[i]);
        rev_array[n-1-i]=array[i];
    }

    printf("rev array: ");

    for (i=0 ; i<n ; i++)
    {
        printf("\n%d", rev_array[i]);
    }

    return 0;
}
