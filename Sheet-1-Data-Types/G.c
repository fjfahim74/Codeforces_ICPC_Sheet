
#include <stdio.h>
int main()
{
    long long int A, i, sum;
    scanf("%lld", &A);
    sum = A * (A + 1) / 2;
    printf("%lld\n", sum);
}