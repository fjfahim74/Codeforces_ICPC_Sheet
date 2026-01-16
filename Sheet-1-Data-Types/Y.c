#include <stdio.h>
int main()
{
    long long int A, B, C, D, X;
    scanf("%lld%lld%lld%lld", &A, &B, &C, &D);
    X = A % 100;
    X = ((X * B % 100)) % 100;
    X = ((X * C % 100)) % 100;
    X = ((X * D % 100)) % 100;
    printf("%02lld\n", X);
}