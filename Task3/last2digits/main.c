#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A,B,C,D, result=1 ,last_2digits ;

   printf("Enter the 4 numbers : \n") ;
   scanf("%d %d %d %d",&A,&B,&C,&D) ;

   result=A * B * C * D ;

   if(result != 0)
   {
        last_2digits = result %100 ;
        printf("%d",last_2digits) ;
        result -= last_2digits ;
        result /=10 ;
   }
    return 0;
}
