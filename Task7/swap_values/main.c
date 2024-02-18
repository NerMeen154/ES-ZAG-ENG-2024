#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 100, y = 50, z = 82, temp;
    int *p , *q , *r ;

    p = &x;
    q = &y;
    r = &z;

    printf("The value of \n\
           x = %i \n\
           y = %i \n\
           z = %i\n",x, y, z);
    printf("The value of \n\
           p = %i \n\
           q = %i \n\
           r = %i\n",p, q, r);
    printf("The value of \n\
           *p = %i \n\
           *q = %i \n\
           *r= %i\n",*p, *q, *r);
    printf("\nSwapping pointers.\n");
    temp = r;
    r = p;
    p = q;
    q = temp;
    printf("\nThe value of \n\
           x = %i \n\
           y = %i \n\
           z = %i\n",x, y, z);
    printf("The value of \n\
           p = %i \n\
           q = %i \n\
           r = %i\n",p, q, r);
    printf("The value of \n\
           *p = %i \n\
           *q = %i \n\
           *r= %i\n",*p, *q, *r);

    return 0;
}
