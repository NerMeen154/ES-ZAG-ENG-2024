#include <stdio.h>
#include <stdlib.h>

enum month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main()
{
    enum month index = Jan;

    char *month_names[12] = {"January", "February", "March", "April", "May", "June", "July",
                            "August", "September", "October", "November", "December"};

    for(index = Jan; index <= Dec; index++)
    {        printf("%s\n\
                    = %d\n", month_names[index -1], index);
    }
    return 0;
}
