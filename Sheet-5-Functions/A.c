#include <stdio.h>
int check(int a, int b)
{
    int s;
    s = a + b;
    return s;
}
int main()
{
    int a, b, x;
    scanf("%d %d", &a, &b);
    x = check(a, b);
    printf("%d", x);
}