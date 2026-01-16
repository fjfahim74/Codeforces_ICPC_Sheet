#include <stdio.h>

void solve(int row, int n)
{
    if (row > n)
        return;
    for (int i = 1; i <= n - row; i++)
        printf(" ");
    for (int i = 1; i <= 2 * row - 1; i++)
        printf("*");
    printf("\n");
    solve(row + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(1, n);
}