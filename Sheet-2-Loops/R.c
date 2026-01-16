#include <stdio.h>

int main()
{
    int m, n;
    for (;;)
    {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0)
        {
            break;
        }
        int sum = 0;
        if (m <= n)
        {
            for (int i = m; i <= n; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
        }
        else
        {
            for (int i = n; i <= m; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
        }
        printf("sum =%d\n", sum);
    }
}