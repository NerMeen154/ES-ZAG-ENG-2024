#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array_num[10]={}, i, min_num=0, max_num=0;

    printf("Enter the 10 numbers: \n");

    for(i=0 ; i<10 ; i++)
    {
        scanf("%d",&array_num[i]);

        min_num=(min_num < array_num[i]? min_num:array_num[i]);
        max_num=(max_num > array_num[i]? max_num:array_num[i]);
    }

    printf("the minimum number of array = %d",min_num);
    printf("\nthe maximum number of array = %d",max_num);

    return 0;
}
