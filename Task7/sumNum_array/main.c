#include <stdio.h>
#include <stdlib.h>

float Fun_avg(int N, int *array);

int main()
{
    int N;
    printf("Enter the number of elements of the array: \n");
    scanf("%i", &N);

    if (N > 0)
    {
        int *array = (int *)malloc(N * sizeof(int));
        if (array == NULL)
        {
            printf("Error !!\n");

        }

        printf("Enter the elements of the array:\n");
        float avg_num = Fun_avg(N, array);
        printf("The average of numbers of the array = %.4f\n", avg_num);

        free(array);
    }
    else
    {
        printf("Error \"Number of elements must be positive\" . \n");
    }

    return 0;
}

float Fun_avg(int N, int *array)
{
    int sum =0, i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%i", &array[i]);
        sum += array[i];
    }
    float Avg_num = (float)sum / N;

    return Avg_num;
}
