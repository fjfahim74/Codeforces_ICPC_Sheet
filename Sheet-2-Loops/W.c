#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int i = 1; i <= n - row; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= (2 * row - 1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = n; row >= 1; row--)
    {
        for (int i = 1; i <= n - row; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= (2 * row - 1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
}