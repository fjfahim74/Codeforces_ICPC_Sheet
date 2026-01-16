#include <stdio.h>
int main()
{
    int m, n, i, gcd = 1;
    scanf("%d %d", &m, &n);
    for (i = 1; i <= m && i <= n; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }
    printf("%d", gcd);
}