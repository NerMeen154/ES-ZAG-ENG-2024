#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, power , result=1;

    printf("Enter the number and the power of number: \n");
    scanf("%d %d", &num ,&power);

    for(i=0 ; i<power ; i++)
    {
        result *=num;
    }

    printf("result the power of a number = %d",result);
    return 0;
}
