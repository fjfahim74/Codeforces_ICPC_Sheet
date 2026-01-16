#include <stdio.h>
int main()
{
    int n, i, res;
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] == num[n - i - 1])
            res = 1;
        else
        {
            printf("NO");
            return 0;
        }
    }
    if (res == 1)
    {
        printf("YES");
    }
}