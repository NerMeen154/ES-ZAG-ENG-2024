#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, factorial=1 ;

    printf("Enter the number : ");
    scanf("%d", &num);

    while(num>0)
    {
        factorial *=num ;
        num-- ;
    }

    printf("the factorial of number = %d\n",factorial);
    return 0;
}
