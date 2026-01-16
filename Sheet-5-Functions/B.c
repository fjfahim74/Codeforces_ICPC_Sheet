#include <stdio.h>
int check(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            printf("%d ", i);
            continue;
        }
        printf("%d", i);
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    check(n);
}