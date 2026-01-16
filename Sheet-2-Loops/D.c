#include <stdio.h>
int main()
{
    int A;
    for (int i = 1;; i++)
    {
        scanf("%d", &A);
        if (A != 1999)
            printf("Wrong\n");
        if (A == 1999)
        {
            printf("Correct\n");
            break;
        }
    }
}