#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int t = 0; t < n; t++)
    {
        char a[55], b[55];
        scanf("%s %s", a, b);
        int alen = strlen(a);
        int blen = strlen(b);
        int i = 0, j = 0, k = 0;
        char c[110];
        while (i < alen || j < blen)
        {
            if (i < alen)
                c[k++] = a[i++];
            if (j < blen)
                c[k++] = b[j++];
        }
        c[k] = '\0';
        printf("%s\n", c);
    }
}