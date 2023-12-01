#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B , C;
    int max_num=0 , min_num=0 ;

    printf("Enter the three number A,B,C :\n");
    scanf("%d %d %d", &A,&B,&C);

    min_num = A < B ? (A < C ? A : C) : (B < C ? B : C);
    max_num = A > B ? (A > C ? A : C) : (B > C ? B : C);

    printf("Minimum number: %d\n", min_num);
    printf("Maximum number: %d\n", max_num);

    return 0;
}
