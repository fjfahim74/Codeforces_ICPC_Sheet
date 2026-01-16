#include <stdio.h>
int main()
{
    long long int n, i;
    scanf("%lld", &n);
    long long int num[n];
    num[1] = 0;
    num[2] = 1;
    for (i = 3; i <= n; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
    }
    printf("%lld", num[n]);
}