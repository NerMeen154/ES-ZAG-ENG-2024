#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char num;
    int bit_num ,option_num ,num_y ,i ,new_num = 0;

    printf("Enter an unsigned char number : ");
    scanf("%hhu", &num);

    printf("Enter the bit number : ");
    scanf("%d", &bit_num);

    printf("\nChoose an option :\n");
    printf("1- Set bit function.\n2- Clear bit function.\n");
    printf("3- Toggle bit function.\n4- Read bit function.\n");
    scanf("%d", &option_num);

    for (i = 7; i >= 0; i--)
    {
        num_y = (num >> i) & 0x01;

        if (i == bit_num)
        {
            switch (option_num)
            {
                case 1:
                    num_y = 1;
                    break;
                case 2:
                    num_y = 0;
                    break;
                case 3:
                    num_y = 1 - num_y;
                    break;
                case 4:
                    printf("Bit number = %d\n", num_y);
                    break;
            }
        }

        new_num = (new_num << 1) | num_y;
    }

    if (new_num != num)
        printf("The new number is = %d\n", new_num);
    else
        printf("The number is = %d\n", num);

    return 0;
}
