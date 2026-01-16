#include <stdio.h>
#include <string.h>
int main()
{
    char num[100005];
    scanf("%s", num);
    int x;
    x = strlen(num);
    for (int i = 0; i < x; i++)
    {
        if (num[i] >= 'a' && num[i] <= 'z')
        {
            num[i] = num[i] - 32;
        }
        else if (num[i] >= 'A' && num[i] <= 'Z')
        {
            num[i] = num[i] + 32;
        }
        else if (num[i] == ',')
        {
            num[i] = ' ';
        }
    }
    printf("%s", num);
}