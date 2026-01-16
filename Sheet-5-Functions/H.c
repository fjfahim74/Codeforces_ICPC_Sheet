
#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        char c;
        scanf("%d %c", &x, &c);
        for (int j = 1; j <= x; j++)
        {
            printf("%c", c);
            if (j != x)
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    solve();
}