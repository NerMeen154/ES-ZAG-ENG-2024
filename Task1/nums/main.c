#include <stdio.h>
#include <stdlib.h>

int main()
{

    float A, B, C, D, Result=0;

    printf("Enter the four numbers A,B,C,D :\n");
    scanf("%f %f %f %f", &A,&B,&C,&D);

    Result= (A * B) - (C * D);
    printf("The Result= %.3f",Result);

    return 0;
}
