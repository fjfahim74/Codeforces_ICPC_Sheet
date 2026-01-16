#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, i, sum = 0;
    scanf("%lld", &n);
    long long int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    printf("%lld", abs(sum));
}