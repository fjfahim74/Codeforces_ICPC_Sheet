#include <stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int num[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (num[i][j] == x)
            {
                printf("will not take number");
                return 0;
            }
        }
    }
    printf("will take number");
}