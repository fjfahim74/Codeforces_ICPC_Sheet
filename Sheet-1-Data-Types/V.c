#include <stdio.h>
int main()
{
    int A, B;
    char c;
    scanf("%d %c %d", &A, &c, &B);
    if (c == '<' && A < B)
        printf("Right");
    else if (c == '<' && A > B)
        printf("Wrong");
    else if (c == '>' && A > B)
        printf("Right");
    else if (c == '>' && A < B)
        printf("Wrong");
    else if (c == '=' && A == B)
        printf("Right");
    else
        printf("Wrong");
}