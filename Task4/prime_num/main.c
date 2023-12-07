#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num ,i ,prime_num;

    printf("Enter the  positive number : \n");
    scanf("%d",&num);

    if(num < 0)
    {
       printf("The number is negative ");
       printf("Enter the  positive number: \n");
       scanf("%d",&num);
    }
    if(num == 0 || num == 1 )
    {
        prime_num = 0;
        printf("the number %d is not prime number ",num);
    }
    else
    {
        for(i=2 ;i<=num/2 ;i++)
        {
            if(num %i == 0)
            {
                prime_num = 0;
                printf("the number %d is not prime number ",num);
                break;
            }
        }
    }

    if(prime_num != 0)
        printf("the number %d is prime number ",num);

    return 0;
}
