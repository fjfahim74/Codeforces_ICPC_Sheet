#include <stdio.h>
void solve()
{
    long long int x, n;
    scanf("%lld %lld", &x, &n);
    long long int sum = 0;
    long long int res = 1;
    for (int i = 0; i <= n; i += 2)
    {
        if (i == 0)
            sum += res - 1;
        else
        {
            res = 1;
            for (int j = 1; j <= i; j++)
                res = res * x;
            sum += res;
        }
    }
    printf("%lld\n", sum);
}
int main()
{
    solve();
}