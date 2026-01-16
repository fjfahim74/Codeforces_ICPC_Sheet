#include <stdio.h>
int main()
{
    int num, sum = 0, temp, r;
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    printf("%d\n", sum);
    if (num == sum)
        printf("YES");
    else
        printf("NO");
}