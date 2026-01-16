#include <stdio.h>
int main()
{
    int A, even = 0;
    scanf("%d", &A);
    for (int i = 1; i <= A; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            even++;
        }
    }
    if (even == 0)
        printf("-1");
}