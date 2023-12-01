#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,i;

    printf("Enter number A : ");
    scanf("%d",&A);

    printf("Enter number B : ");
    scanf("%d",&B);

    for(i=A ; i<=B;i++)
    {
        printf("%d \n",i);
    }
    return 0;
}
