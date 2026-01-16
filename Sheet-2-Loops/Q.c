#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x == 0)
        {
            printf("0");
        }
        else
        {
            while (x > 0)
            {
                printf("%d ", x % 10);
                x = x / 10;
            }
        }
        printf("\n");
    }
}