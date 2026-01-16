#include <stdio.h>
int check(int num[], int n)
{
    if (n == 0)
    {
        printf("%d ", num[n]);
        return 0;
    }
    printf("%d ", num[n]);
    check(num, n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    int num[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    if (n % 2 == 0)
    {
        check(num, n - 2);
    }
    else
    {
        check(num, n - 1);
    }
}