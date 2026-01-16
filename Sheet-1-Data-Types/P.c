#include <stdio.h>
#include <string.h>
int main()
{
    char num[10005];
    scanf("%s", num);
    char len = num[0];
    if (len % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}