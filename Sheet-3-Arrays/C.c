#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] > 0)
        {
            printf("1 ");
        }
        if (num[i] < 0)
        {
            printf("2 ");
        }
        if (num[i] == 0)
        {
            printf("0 ");
        }
    }
}