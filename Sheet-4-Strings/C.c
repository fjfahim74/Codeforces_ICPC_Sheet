#include <stdio.h>
#include <string.h>
int main()
{
    char num[25], nam[25];
    scanf("%s %s", num, nam);
    if (strcasecmp(num, nam) <= 0)
    {
        printf("%s", num);
    }
    else
    {
        printf("%s", nam);
    }
}