#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_x, num_y, i;

    printf("Enter the number x: ");
    scanf("%d", &num_x);

    for (i = 15; i >= 0; i--)
    {
        if(i % 4 == 3)
            printf(" ");

        num_y = num_x;
        num_y = num_y >> i;
        num_y = num_y & 0X0001;

        printf("%d", num_y);
    }
    return 0;
}
