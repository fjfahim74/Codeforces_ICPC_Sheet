#include <stdio.h>
int check(int n)
{
    float sum = 0, avg;
    float num[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    avg = sum / n;
    printf("%.7f", avg);
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    check(n);
}