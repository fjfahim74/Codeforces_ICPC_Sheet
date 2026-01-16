#include <stdio.h>
int main()
{
    int n, i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int x;
        long long fact = 1;
        scanf("%d", &x);

        for (int j = 1; j <= x; j++)
        {
            fact = fact * j;
        }
        printf("%lld\n", fact);
    }
}