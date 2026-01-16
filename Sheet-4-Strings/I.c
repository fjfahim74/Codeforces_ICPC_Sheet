#include <stdio.h>
#include <string.h>
int main()
{
    char num[1005];
    scanf("%s", num);
    int x, res;
    x = strlen(num);
    for (int i = 0; i < x - 1; i++)
    {
        if (num[i] == num[x - 1 - i])
        {
            res = 1;
        }
        else
        {

            printf("NO");
            return 0;
        }
    }
    if (res == 1)
    {
        printf("YES");
    }
}