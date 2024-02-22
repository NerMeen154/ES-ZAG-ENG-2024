#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;

}Time_a;

Time_a *PtrStart_time      = NULL;
Time_a *PtrStop_time       = NULL;
Time_a *PtrDifference_time = NULL;

void Fun_GitTime(Time_a *PtrStart , Time_a *PtrStop);
void Fun_Time_Difference(Time_a *PtrStart_2, Time_a *PtrStop_2, Time_a *PtrDiff);

int main()
 {
    PtrStart_time      = (Time_a *)malloc(sizeof(Time_a));
    PtrStop_time       = (Time_a *)malloc(sizeof(Time_a));
    PtrDifference_time = (Time_a *)malloc(sizeof(Time_a));

    if((PtrStart_time != NULL) && (PtrStop_time != NULL) && (PtrDifference_time != NULL))
    {
        Fun_GitTime(PtrStart_time, PtrStop_time);
        Fun_Time_Difference(PtrStart_time, PtrStop_time, PtrDifference_time);

        printf("------------------------------------------------.\n");
        printf("TIME DIFFERENCE: ");
        printf("%2u : %2u : %2u - ",(PtrStart_time->hours),(PtrStart_time->minutes),(PtrStart_time->seconds));
        printf("%2u : %2u : %2u = ",(PtrStop_time->hours),(PtrStop_time->minutes),(PtrStop_time->seconds));
        printf("%2u : %2u : %2u\n ",(PtrDifference_time->hours),(PtrDifference_time->minutes),(PtrDifference_time->seconds));

    }
    else
    {
        printf("Error !");
    }

    free(PtrStart_time);
    free(PtrStop_time);
    free(PtrDifference_time);

        return 0;
}

void Fun_GitTime(Time_a *PtrStart , Time_a *PtrStop)
{
    printf("Enter start time:\n");
    printf("Enter hours, minutes and seconds respectively: \n");

    scanf("%u %u %u",&(PtrStart->hours),&(PtrStart->minutes),&(PtrStart->seconds));

    printf("------------------------------------------------.\n");

    printf("Enter stop time:\n");
    printf("Enter hours, minutes and seconds respectively: \n");

    scanf("%u %u %u",&(PtrStop->hours),&(PtrStop->minutes),&(PtrStop->seconds));
}

void Fun_Time_Difference(Time_a *PtrStart_2, Time_a *PtrStop_2, Time_a *PtrDiff)
{
    unsigned int time_start_Sec = 0, time_stop_Sec = 0, time_Deff_Sec;

    time_start_Sec = (PtrStart_2->hours)*3600 + (PtrStart_2->minutes)*60 +(PtrStart_2->seconds);
    time_stop_Sec  = (PtrStop_2->hours) *3600 + (PtrStop_2->minutes) *60 +(PtrStop_2->seconds);

    time_Deff_Sec = time_start_Sec - time_stop_Sec;

    PtrDiff ->hours   =  time_Deff_Sec  /3600;
    PtrDiff ->minutes = (time_Deff_Sec  %3600) /60;
    PtrDiff ->seconds = (time_Deff_Sec  %3600) %60;

}
