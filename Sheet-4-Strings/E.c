#include <stdio.h>
#include <string.h>
int main()
{
    char num[1000005];
    scanf("%s", num);
    int sum = 0, x;
    x = strlen(num);
    for (int i = 0; i < x; i++)
    {
        sum = sum + (num[i] - '0');
    }
    printf("%d", sum);
}