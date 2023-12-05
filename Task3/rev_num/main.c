#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,first, rev_num=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("reverse a number: ");


    for(int i=0 ; i<sizeof(num) ; i++)
    {
        if(num != 0)
        {
            first=num%10;
            printf("%d",first);

            num-=first;
            num/=10;
        }
    }

    return 0;
}
