#include <stdio.h>
int main()
{
    long long int M, N, X;
    scanf("%lld%lld", &M, &N);
    X = M % 10 + N % 10;
    printf("%lld\n", X);
}