#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float Salary;
    float Bonus;
    float Deduction;

}employees;

employees Ahmed;
employees Waleed;
employees Amr;

int main()
{
    float Total_Ahmed = 0, Total_Waleed = 0, Total_Amr = 0, Total_value = 0;

    printf("Please Enter Ahmed salary: ");
    scanf("%f", &(Ahmed.Salary));
    printf("Please Enter Ahmed Bonus: ");
    scanf("%f", &(Ahmed.Bonus));
    printf("Please Enter Ahmed Deduction: ");
    scanf("%f", &(Ahmed.Deduction));
    printf("\n------------------------------------------------.\n\n");


    printf("Please Enter Waleed salary: ");
    scanf("%f", &(Waleed.Salary));
    printf("Please Enter Waleed Bonus: ");
    scanf("%f", &(Waleed.Bonus));
    printf("Please Enter Waleed Deduction: ");
    scanf("%f", &(Waleed.Deduction));
    printf("\n------------------------------------------------.\n\n");


    printf("Please Enter Amr salary: ");
    scanf("%f", &(Amr.Salary));
    printf("Please Enter Amr Bonus: ");
    scanf("%f", &(Amr.Bonus));
    printf("Please Enter Amr Deduction: ");
    scanf("%f", &(Amr.Deduction));
    printf("\n------------------------------------------------.\n\n");


    Total_Ahmed  = Ahmed.Salary + Ahmed.Bonus - Ahmed.Deduction;
    Total_Waleed = Waleed.Salary + Waleed.Bonus - Waleed.Deduction;
    Total_Amr    = Amr.Salary + Amr.Bonus - Amr.Deduction;


    Total_value = Total_Ahmed + Total_Amr + Total_Waleed;
    printf("Total value Needed is %.4f\n",Total_value);

    return 0;
}
