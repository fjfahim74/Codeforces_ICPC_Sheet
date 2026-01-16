#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    int max = A;
    int min = A;
    if (min > B)
        min = B;
    if (min > C)
        min = C;
    if (max < B)
        max = B;
    if (max < C)
        max = C;
    printf("%d %d", min, max);
}