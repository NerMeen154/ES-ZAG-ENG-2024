#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_array[5]={},i=0;

    printf("Enter the 5 numbers of array: \n");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&num_array[i]);
    }

    for(i=0 ; i<5 ; i++)
    {
        if( num_array[i]%3==0)
            printf("the number that are divisible by 3=%d\n",num_array[i]);
    }
    return 0;
}
