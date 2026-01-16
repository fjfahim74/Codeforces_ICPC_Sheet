#include <stdio.h>
int main()
{
    int A, count = 0;
    scanf("%d", &A);
    for (int i = 1; i <= A; i++)
    {
        if ((A % i) == 0)
            count++;
    }
    if (count == 2)
        printf("YES\n");
    else
        printf("NO\n");
}