#include <stdio.h>
int main()
{
    long long int a, b, c, d, X;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    X = (a * b) - (c * d);
    printf("Difference = %lld", X);
}