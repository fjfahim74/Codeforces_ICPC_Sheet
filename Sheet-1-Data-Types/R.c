#include <stdio.h>
int main()
{
    int A, year, months, days, mon;
    scanf("%d", &A);
    year = A / 365;
    mon = A % 365;
    months = mon / 30;
    days = mon % 30;
    printf("%d years\n%d months\n%d days\n", year, months, days);
}