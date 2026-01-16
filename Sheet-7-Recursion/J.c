#include <stdio.h>
void check(int i, int n, long long sum)
{
    if (i <= n)
    {
        sum = sum * i;
        check(i + 1, n, sum);
    }
    else
    {
        printf("%lld", sum);
    }
}
int main()
{
    int n;
    long long sum = 1;
    scanf("%d", &n);
    check(1, n, sum);
}