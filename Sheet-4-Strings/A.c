#include <stdio.h>
#include <string.h>
int main()
{
    char num[1005], nam[1005];
    scanf("%s %s", num, nam);
    printf("%d %d\n", strlen(num), strlen(nam));
    printf("%s %s", num, nam);
}