#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float Pi = 3.14;
    double R , Area = 0.0;

    printf("Enter the radius of a circle: \n");
    scanf("%lf",&R); Area= Pi*R*R ;

    printf("The area of the circle = %.2lf", Area);

    return 0;
}
