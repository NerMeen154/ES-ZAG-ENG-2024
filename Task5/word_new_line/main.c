#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i;

    printf("Enter the number of integers inside the array: \n");
    scanf("%d",&n);

    getchar();
    char sentence[n];

    printf("Enter the sentence: \n");
    fgets(sentence, sizeof(sentence), stdin);
    printf("\n");


    for(i=0;i<strlen(sentence);i++)
    {
        if (sentence[i]==' ')
            printf("\n");
        else
            printf("%c",sentence[i]);

    }

    printf("\n");
    return 0;
}
