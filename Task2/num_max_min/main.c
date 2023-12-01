#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i ,num ,max_num=0, min_num=0;

   for(i=1;i<6;i++)
   {
       printf("Enter the number of %d : ",i);
       scanf("%d",&num);

       if(num>max_num)
        max_num=num;

       if(num<min_num)
        min_num=num;
   }

   printf("Minimum number: %d\n", min_num);
   printf("Maximum number: %d\n", max_num);
}
