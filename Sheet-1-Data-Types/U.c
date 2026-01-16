#include <stdio.h>

int main()
{
    double N;
    scanf("%lf", &N);

    int integerPart = (int)N;
    double decimalPart = N - integerPart;

    if (decimalPart == 0)
        printf("int %d\n", integerPart);
    else
        printf("float %d %.10lf\n", integerPart, decimalPart);

    return 0;
}