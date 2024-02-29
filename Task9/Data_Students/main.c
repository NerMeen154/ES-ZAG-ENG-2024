#include <stdio.h>
#include <stdlib.h>

#define MaxNum_Student 50

typedef struct
{
    char Name_stu[30];
    int score_stu;
}student_t;

student_t student[MaxNum_Student];

int main()
{
    int index, flag, count = 0, sum = 0, Max_score = 1;
    float avrg = 0.0;

    for(index = 0; index < MaxNum_Student; index++)
    {
        printf("Enter student name : ");
        scanf(" %s",&student[index].Name_stu);

        printf("Enter student score : ");
        scanf("%d",&student[index].score_stu);

        sum += (student[index].score_stu);
        count++;

        if (student[index].score_stu > student[Max_score].score_stu)
        {
            Max_score = index;
        }

        printf("\nEnter \" -1 \" to stop OR \" 0 \" to continue.\n");
        scanf("%d",&flag);
        printf("\n");

        if(flag == -1)
            break;
    }

    printf("\n======================REPORT====================\n\n");
    printf(" Student Name                    Score\n");
    printf("--------------                  -------\n");

    for(index = 0 ; index < count ; index++)
    {
        printf("%-8s             ",student[index].Name_stu);
        printf("            %3d\n",student[index].score_stu);
    }

    printf("\nThe number of student is %d\n",count);
    avrg = (float)sum/count;
    printf("The average student is %.3f\n",avrg);

    printf("\n===========================================================\n\n");
    printf("Below the average student ... \" work harder \".");
    printf("\n===========================================================\n\n");
    printf(" Student Name                    Score\n");
    printf("--------------                  -------\n");

    for(index = 0 ; index < count ; index++)
    {
        if((student[index].score_stu) < avrg)
        {
            printf("%-8s             ",student[index].Name_stu);
            printf("            %3d\n",student[index].score_stu);
        }
    }

    printf("\n========================================================-===\n\n");
    printf("Top Scorer Student ... \" congratulation \".");
    printf("\n============================================================\n\n");
    printf(" Student Name                    Score\n");
    printf("--------------                  -------\n");

    printf("%-8s             ",student[Max_score].Name_stu);
    printf("            %3d\n",student[Max_score].score_stu);

    return 0;
}
