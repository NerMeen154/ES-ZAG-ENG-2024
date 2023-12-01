#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows , num=1 ,i , j;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1 ; j<=i ;j++)
        {
            printf("%d ",num);
            num++ ;
        }

        printf("\n");
    }
    return 0;
}
