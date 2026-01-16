#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", A, i, (A * i));
    }
}