#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; char ch;

    printf("Enter the number and character : \n");
    scanf("%d %c",&num,&ch);

    if(num %2 == 0)
        printf("the number is even \" %c \"",ch);
    else
    {
        if(ch>96)
        {
            ch-=32;
            printf("the number is odd \" %c \"",ch);
        }
        else
        {
            ch+=32;
            printf("the number is odd \" %c \"",ch);
        }
    }
    return 0;
}
