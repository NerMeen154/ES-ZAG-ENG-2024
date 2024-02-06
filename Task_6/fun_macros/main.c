#include <stdio.h>
#include <stdlib.h>

#include "FunMacro.h"

int main()
{
    unsigned int value, bit_pos;

    printf("Enter of value: ");
    scanf("%u",&value);
    printf("Enter position of bit: ");
    scanf("%u",&bit_pos);

    SET_BIT(value,bit_pos);
    printf("new value after setting bit %u = %u \n",bit_pos ,value);

    CLEAR_BIT(value,bit_pos);
    printf("new value after After clearing bit %u = %u \n",bit_pos ,value);

    TOGGLE_BIT(value,bit_pos);
    printf("new value after toggleing bit %u = %u \n",bit_pos ,value);
    return 0;
}
