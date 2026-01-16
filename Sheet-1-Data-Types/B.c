#include <stdio.h>
int main()
{
    int a;
    long long int b;
    char S[100];
    float c;
    double d;
    scanf("%d %lld %s %f %lf", &a, &b, &S, &c, &d);
    printf("%d\n%lld\n%s\n%f\n%lf\n", a, b, S, c, d);
}