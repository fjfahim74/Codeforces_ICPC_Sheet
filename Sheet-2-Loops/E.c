#include <stdio.h>
int main()
{
    int A;
    int max = -9999999999;
    scanf("%d", &A);
    for (int i = 1; i <= A; i++)
    {
        int x;
        scanf("%d", &x);
        if (max < x)
            max = x;
    }
    printf("%d\n", max);
}