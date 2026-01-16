
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int x;
    scanf("%d", &x);
    int pos = -1;
    for (i = 0; i < n; i++)
    {
        if (num[i] == x)
        {
            pos = i;
            break;
        }
    }
    printf("%d", pos);
}