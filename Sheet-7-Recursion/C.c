#include <stdio.h>
void check(int i)
{
    if (i >= 1)
    {
        if (i != 1)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%d", i);
        }
        check(i - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    check(n);
}