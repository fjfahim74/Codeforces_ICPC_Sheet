#include <stdio.h>
int check(int n)
{
   int num[n + 5];
   int nam[n + 5];
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &num[i]);
   }
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &nam[i]);
   }
   for (int i = 0; i < n; i++)
   {
      printf("%d ", nam[i]);
   }
   for (int i = 0; i < n; i++)
   {
      if (i != n - 1)
      {
         printf("%d ", num[i]);
      }
      else
      {
         printf("%d ", num[i]);
      }
   }
   return 0;
}

int main()
{
   int n;
   scanf("%d", &n);
   check(n);
}