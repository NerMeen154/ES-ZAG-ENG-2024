#include <stdio.h>
#include <stdlib.h>

void Factorial(unsigned int Num, unsigned int *ptr_Fac);

int main()
{
    unsigned int Num, Fac_Num = 1;

    printf("Enter the number : ");
    scanf("%i", &Num);

    if(Num < 0)
    {
        printf("Error !\n");
    }
    else
    {
        Factorial(Num, &Fac_Num);
        printf("Factorial of number %i = %i",Num,Fac_Num );
    }

    return 0;
}

void Factorial(unsigned int Num, unsigned int *ptr_Fac)
{
    if( Num == 0)
    {
        *ptr_Fac = 1;
    }
    else
    {
        Factorial((Num -1), ptr_Fac);
        *ptr_Fac *= Num;
    }
}
