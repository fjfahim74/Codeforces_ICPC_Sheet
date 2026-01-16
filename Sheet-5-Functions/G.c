#include <stdio.h>
int check(int n)
{
    int num[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = num[0];
    int min = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    check(n);
}