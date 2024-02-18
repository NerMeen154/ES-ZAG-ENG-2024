#include <stdio.h>
#include <stdlib.h>

int Num1, Num2, Sum, Sub;

void calculate( int Number1 ,int Number2 ,int *Res_Sum ,int *Res_Sub);

int main()
{

    printf("Enter the 2 numbers : \n");
    scanf("%i %i",&Num1 , &Num2);

    calculate(Num1 , Num2, &Sum, &Sub);


    printf("%i + %i = %i\n",Num1 ,Num2 ,Sum);
    printf("%i - %i = %i\n",Num1 ,Num2 ,Sub);


    return 0;
}

void calculate( int Number1 ,int Number2 ,int *Res_Sum ,int *Res_Sub)
{
    *Res_Sum = Number1 + Number2;
    *Res_Sub = Number1 - Number2;
}
