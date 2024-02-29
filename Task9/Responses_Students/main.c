#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Correct_Ans[25], Ans_stud[25];
    int index_1 , index_2, index_3, index_4;
    int numQustion_true = 1, numQustion_false = 1;

    printf("Enter the correct answers \" A, B, C, D \" for 25 questions: \n");

    for(index_1 = 0; index_1 < 25; index_1++)
    {
        printf("The quation %d : ",(index_1 + 1));
        scanf(" %c", &Correct_Ans[index_1]);
    }

    for(index_2 = 0; index_2 < 3; index_2++)
    {
        int numQustion_true = 0, numQustion_false = 0;

        printf("\nInput responses student \"%d\": \n",(index_2 +1));

        for(index_3 = 0; index_3 < 25; index_3++)
        {
            printf("The quation %d : ",(index_3 + 1));
            scanf(" %c", &Ans_stud[index_3]);

            if(Ans_stud[index_3] == Correct_Ans[index_3])
            {
                numQustion_true++;
            }
        }

        printf("\nScore is %d out of 25 .\n", numQustion_true);
        printf("Responses to the items below are wrong...\n\t\t");

        for(index_4 = 0; index_4 < 25 ;index_4++)
        {
            numQustion_false++;
            if(Ans_stud[index_4] != Correct_Ans[index_4])
            {
                printf("%d  ", numQustion_false);
            }

        }
        printf("\n**************************************\n");
    }


    return 0;
}
