#include <stdio.h>

int main()
{
    int k, c;
    scanf("%d %d", &k, &c);
    int a[105][105];
    int b[105][105];
    for (int i = 0; i < k; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < k; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
}