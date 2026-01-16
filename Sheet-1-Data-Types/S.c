#include <stdio.h>
int main()
{
    float A;
    scanf("%f", &A);
    if (A >= 0 && A <= 25.0)
        printf("Interval [0,25]");
    else if (A > 25.0 && A <= 50.0)
        printf("Interval (25,50]");
    else if (A > 50.0 && A <= 75.0)
        printf("Interval (50,75]");
    else if (A > 75.0 && A <= 100.0)
        printf("Interval (75,100]");
    else
        printf("Out of Intervals");
}