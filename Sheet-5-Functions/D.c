#include <stdio.h>

void check()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < 2)
        {
            printf("NO\n");
            continue;
        }
        int count = 1;
        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                count = 0;
                break;
            }
        }

        if (count)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
int main()
{
    check();
}
