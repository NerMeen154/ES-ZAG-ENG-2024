#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array_1[10] = {}, array_2[10] = {}, array_3[10] = {};
    int x1, x2, x3, cont1_pass = 0, cont2_pass = 0, cont3_pass = 0;
    int cont1_fail = 0, cont2_fail = 0, cont3_fail = 0, deg_max=0;
    int num_pass = 0, num_fail = 0, max1=0, max2=0, max3=0;
    int min1=100, min2=100, min3=100, deg_min=100;
    int sum1=0, sum2=0, sum3=0; float deg_avg=0.0;


    for (int i = 1; i <= 3; i++)
    {
        printf("Enter 10 grades for class %d:\n", i);


        for (int j = 0; j < 10; j++)
        {
            switch (i)
            {
                case 1:
                    scanf("%d", &array_1[j]);
                    x1 = (array_1[j] >= 50) ? cont1_pass++ : cont1_fail++;
                    max1=(max1 > array_1[j]? max1:array_1[j]);
                    min1=(min1 < array_1[j]? min1:array_1[j]);
                    sum1+=array_1[j];
                    break;
                case 2:
                    scanf("%d", &array_2[j]);
                    x2 = (array_2[j] >= 50) ? cont2_pass++ : cont2_fail++;
                    max2=(max2 > array_2[j]? max2:array_2[j]);
                    min2=(min2 < array_2[j]? min2:array_2[j]);
                    sum2+=array_2[j];
                    break;
                case 3:
                    scanf("%d", &array_3[j]);
                    x3 = (array_3[j] >= 50) ? cont3_pass++ : cont3_fail++;
                    max3=(max3 > array_3[j]? max3:array_3[j]);
                    min3=(min3 < array_3[j]? min3:array_3[j]);
                    sum3 +=array_3[j];
                    break;
            }
        }
    }

    num_pass = cont1_pass + cont2_pass + cont3_pass;
    num_fail = cont1_fail + cont2_fail + cont3_fail;
    deg_max=max1>max2? (max1>max3?max1:max3) : (max2>max3?max2:max3);
    deg_min=min1<min2? (min1<min3?min1:min3) : (min2<min3?min2:min3);
    deg_avg=(sum1 + sum2 + sum3) /30.0;

    printf("Number of passed students = %d\n", num_pass);
    printf("Number of failed students = %d\n", num_fail);
    printf("Highest grade = %d\n",deg_max);
    printf("Lowest grade = %d\n",deg_min);
    printf("Average grade = %.2f",deg_avg);
    return 0;
}
