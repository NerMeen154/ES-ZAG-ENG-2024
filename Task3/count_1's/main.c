#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int num_x,num_y;
    int i, cont=0;

    printf("Enter the number x: ");
    scanf("%u", &num_x);

    for (i = 31; i >= 0; i--)
    {
        if(i % 4 == 3)
            printf(" ");

        num_y = num_x;
        num_y = num_y >> i;
        num_y = num_y & 0X0001;

        if(num_y == 1)
            cont++;

        printf("%u", num_y);
    }

    printf("\n the number of 1’s =%d",cont);

    return 0;
}
