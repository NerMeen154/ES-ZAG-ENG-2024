#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int Var = 10;
    unsigned int *address_Var;

    printf("Value of Var = %i \n", Var);

    address_Var = &Var;
    printf("Adress of Var = 0x%X \n", address_Var);

    *address_Var = 20;

    printf("New Value of Var = %i \n", Var);

    return 0;
}
