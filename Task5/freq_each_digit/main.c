#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  string[50];
    int i, j, cont=0;

    printf("Enter the string: \n");
    scanf("%s",string);

    for(i=0 ; i<10 ; i++)
    {
        printf("The repetition of the number %d in the string: ",i);

        for(j=0 ; j<strlen(string) ; j++)
        {
            if((char) i+'0'  == string[j])
                cont++;
        }

        printf("%d \n",cont);
        cont=0;
    }

    return 0;
}
