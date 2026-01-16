#include <stdio.h>
#include <string.h>

int count(char str[], int len)
{
    if (len < 0)
        return 0;
    int res = count(str, len - 1);
    if (str[len] == 'a' || str[len] == 'e' || str[len] == 'i' || str[len] == 'o' || str[len] == 'u' ||
        str[len] == 'A' || str[len] == 'E' || str[len] == 'I' || str[len] == 'O' || str[len] == 'U')
        res = res + 1;
    return res;
}

int main()
{
    char str[205];
    fgets(str, 205, stdin);
    int len = strlen(str);
    int ans = count(str, len - 1);
    printf("%d\n", ans);
}