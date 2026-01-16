#include <stdio.h>
int main()
{
    int A, B, C, res;
    char c, d;
    scanf("%d %c %d %c %d", &A, &c, &B, &d, &C);
    if (c == '+')
        res = A + B;
    if (c == '-')
        res = A - B;
    if (c == '*')
        res = A * B;
    if (c == '/')
        res = A / B;

    if (res == C)
        printf("Yes");
    else
        printf("%d", res);
}