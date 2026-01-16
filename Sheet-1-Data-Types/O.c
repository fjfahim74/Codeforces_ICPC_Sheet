#include <stdio.h>
int main()
{
    int A, B, res;
    char c;
    scanf("%d%c%d", &A, &c, &B);
    if (c == '+')
        res = A + B;
    if (c == '-')
        res = A - B;
    if (c == '*')
        res = A * B;
    if (c == '/')
        res = A / B;
    printf("%d\n", res);
}